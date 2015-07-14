/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.h"
#include "hal.h"
#include "test.h"

#include "chprintf.h"
#include "shell.h"

/*
 * Green LED blinker thread, times are in milliseconds.
 */
static WORKING_AREA(waThread1, 128);
static __attribute__((noreturn)) msg_t Thread1(void *arg) {

  (void)arg;
  chRegSetThreadName("blinker");
  while (TRUE) {
    palClearPad(GPIOE, 0);
    chThdSleepMilliseconds(500);
    palSetPad(GPIOE, 0);
    chThdSleepMilliseconds(500);
  }
}

/*
 * Toggle GPIO Pins (PA9, PA10, PA11)
 */
static WORKING_AREA(waThread2, 258);
static __attribute__((noreturn)) msg_t Thread2(void *arg) {

  (void)arg;
  chRegSetThreadName("gpio_toggler");
  while (TRUE) {
    palClearPad(GPIOA, 9);
    palClearPad(GPIOA, 10);
    palClearPad(GPIOA, 11);
    chThdSleepMilliseconds(10);
    palSetPad(GPIOA, 9);
    palSetPad(GPIOA, 10);
    palSetPad(GPIOA, 11);
    chThdSleepMilliseconds(20);
  }
}

/*
 * Toggle FFSK radio
 */
static WORKING_AREA(waThread3, 512);
static __attribute__((noreturn)) msg_t Thread3(void *arg) {

  (void)arg;
  chRegSetThreadName("ffsk");

  while (TRUE) {
    palClearPad(GPIOD, 3);//RX_EN
    palClearPad(GPIOD, 7);//TX_EN ON
    chThdSleepMilliseconds(100);
    palSetPad(GPIOD, 7);//TX_EN OFF
    chThdSleepMilliseconds(300);
  }
}


/*
 * SPI1 configuration structure.
 * Speed 5.25MHz, CPHA=1, CPOL=1, 8bits frames, MSb transmitted first.
 * The slave select line is the pin GPIOA_4 (SPI1_NSS)
 */
static const SPIConfig spi1cfg = {
  NULL,
  /* HW dependent part.*/
  GPIOA,
  4,
  SPI_CR1_BR_0 | SPI_CR1_BR_1 | SPI_CR1_CPOL | SPI_CR1_CPHA
};

/*
 * SPI3 configuration structure.
 * Speed 21MHz, CPHA=0, CPOL=0, 8bits frames, MSb transmitted first.
 * The slave select line is the pin 12 on the port GPIOA.
 */
static const SPIConfig spi3cfg = {
  NULL,
  /* HW dependent part.*/
  GPIOC,
  13,
  0
};

/*
 * Test SPI bus
 */
static WORKING_AREA(waThread4, 512);
static __attribute__((noreturn)) msg_t Thread4(void *arg) {

  (void)arg;
  chRegSetThreadName("spitest");
  char buf_in[16];
  char buf_out[16];

  while (TRUE) {
    palTogglePad(GPIOE, 3);

    // Acquire exclusive access to the SPI bus
    spiAcquireBus(&SPID1);

    // Configure SPI bus with the current slave select pin
    spiStart(&SPID1, &spi1cfg);
    spiSelect(&SPID1);

    // Start synchronous data transfer
    spiExchange(&SPID1, sizeof(buf_in), buf_out, buf_in);

    // Unselect the slave
    spiUnselect(&SPID1);

    // Release the exclusive access to the bus
    spiReleaseBus(&SPID1);

    chThdSleepMilliseconds(100);


    palTogglePad(GPIOE, 4);

    // Acquire exclusive access to the SPI bus
    spiAcquireBus(&SPID3);

    // Configure SPI bus with the current slave select pin
    spiStart(&SPID3, &spi1cfg);
    spiSelect(&SPID3);

    // Start synchronous data transfer
    spiExchange(&SPID3, sizeof(buf_in), buf_out, buf_in);

    // Unselect the slave
    spiUnselect(&SPID3);

    // Release the exclusive access to the bus
    spiReleaseBus(&SPID3);

    chThdSleepMilliseconds(100);
  }
}





/*===========================================================================*/
/* Command line related.                                                     */
/*===========================================================================*/

#define SHELL_WA_SIZE   THD_WA_SIZE(2048)
#define TEST_WA_SIZE    THD_WA_SIZE(256)

static void cmd_mem(BaseSequentialStream *chp, int argc, char *argv[]) {
  size_t n, size;

  (void)argv;
  if (argc > 0) {
    chprintf(chp, "Usage: mem\r\n");
    return;
  }
  n = chHeapStatus(NULL, &size);
  chprintf(chp, "core free memory : %u bytes\r\n", chCoreStatus());
  chprintf(chp, "heap fragments   : %u\r\n", n);
  chprintf(chp, "heap free total  : %u bytes\r\n", size);
}

static void cmd_threads(BaseSequentialStream *chp, int argc, char *argv[]) {
  static const char *states[] = {THD_STATE_NAMES};
  Thread *tp;

  (void)argv;
  if (argc > 0) {
    chprintf(chp, "Usage: threads\r\n");
    return;
  }
  chprintf(chp, "    addr    stack prio refs     state time\r\n");
  tp = chRegFirstThread();
  do {
    chprintf(chp, "%.8lx %.8lx %4lu %4lu %9s %lu\r\n",
            (uint32_t)tp, (uint32_t)tp->p_ctx.r13,
            (uint32_t)tp->p_prio, (uint32_t)(tp->p_refs - 1),
            states[tp->p_state], (uint32_t)tp->p_time);
    tp = chRegNextThread(tp);
  } while (tp != NULL);
}

static void cmd_test(BaseSequentialStream *chp, int argc, char *argv[]) {
  Thread *tp;

  (void)argv;
  if (argc > 0) {
    chprintf(chp, "Usage: test\r\n");
    return;
  }
  tp = chThdCreateFromHeap(NULL, TEST_WA_SIZE, chThdGetPriority(),
                           TestThread, chp);
  if (tp == NULL) {
    chprintf(chp, "out of memory\r\n");
    return;
  }
  chThdWait(tp);
}

/*
 * Blink LED 2
 */
static void cmd_led(BaseSequentialStream *chp, int argc, char *argv[]){
  (void) chp;
  (void) argc;
  (void) argv;

  static int flag;
  if (flag == 0) {
    palSetPad(GPIOE, 1);
    flag = 1;
  }
  else {
    palClearPad(GPIOE, 1);
    flag = 0;
  }
}

static const ShellCommand commands[] = {
  {"mem", cmd_mem},
  {"threads", cmd_threads},
  {"test", cmd_test},
  {"led", cmd_led},
  {NULL, NULL}
};

static const ShellConfig shell_cfg1 = {
  (BaseSequentialStream *)&SD1,
  commands
};

static const ShellConfig shell_cfg3 = {
  (BaseSequentialStream *)&SD3,
  commands
};

/*
 * Serial driver config
 */
static const SerialConfig usart1_config = {
  57600,                                             /*     BITRATE    */
  0,                                                        /*    USART CR1   */
  USART_CR2_STOP1_BITS,                                     /*    USART CR2   */
  0                                                         /*    USART CR3   */
};

/*
 * Serial driver config
 */
static const SerialConfig usart2_config = {
  4800,                                             /*     BITRATE    */
  0,                                                        /*    USART CR1   */
  USART_CR2_STOP1_BITS,                                     /*    USART CR2   */
  0                                                         /*    USART CR3   */
};

static const SerialConfig usart3_config = {
  57600,                                             /*     BITRATE    */
  0,                                                        /*    USART CR1   */
  USART_CR2_STOP1_BITS,                                     /*    USART CR2   */
  0                                                         /*    USART CR3   */
};

/*
 * Application entry point.
 */
__attribute__((noreturn))  int main(void) {
  Thread *shelltp1 = NULL;
  Thread *shelltp2 = NULL;

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  /*
   * Shell manager initialization.
   */
  shellInit();

  /*
   * Activates the serial driver 1 & 3 using the driver default configuration.
   */
  sdStart(&SD1, &usart1_config);
  sdStart(&SD2, &usart2_config);
  sdStart(&SD3, &usart3_config);

  /*
   * Initialize SPI drivers
   */
  spiStart(&SPID1, &spi1cfg);
  spiStart(&SPID3, &spi3cfg);



  /*
   * Creates the blinker thread.
   */
  chThdCreateStatic(waThread1, sizeof(waThread1), NORMALPRIO, Thread1, NULL);

  /*
   * Creates the GPIO blinker thread.
   */
  chThdCreateStatic(waThread2, sizeof(waThread2), NORMALPRIO, Thread2, NULL);

  /*
   * Creates the FFSK thread.
   */
  chThdCreateStatic(waThread3, sizeof(waThread3), NORMALPRIO, Thread3, NULL);

  /*
   * Creates the SPI thread.
   */
  chThdCreateStatic(waThread4, sizeof(waThread4), NORMALPRIO, Thread4, NULL);

  /*
   * Normal main() thread activity, in this demo it just performs
   * a shell respawn upon its termination.
   */
  while (TRUE) {
    // SD1
    if (!shelltp1) {
        /* Spawns a new shell.*/
        shelltp1 = shellCreate(&shell_cfg1, SHELL_WA_SIZE, NORMALPRIO);
    }
    else {
      /* If the previous shell exited.*/
      if (chThdTerminated(shelltp1)) {
        /* Recovers memory of the previous shell.*/
        chThdRelease(shelltp1);
        shelltp1 = NULL;
      }
    }

    // SD3
    if (!shelltp2) {
        /* Spawns a new shell.*/
        shelltp2 = shellCreate(&shell_cfg3, SHELL_WA_SIZE, NORMALPRIO);
    }
    else {
      /* If the previous shell exited.*/
      if (chThdTerminated(shelltp2)) {
        /* Recovers memory of the previous shell.*/
        chThdRelease(shelltp2);
        shelltp2 = NULL;
      }
    }
    chThdSleepMilliseconds(500);
  }
}
