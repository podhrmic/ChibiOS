/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012,2013 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    chtm.c
 * @brief   Time Measurement module code.
 *
 * @addtogroup time_measurement
 * @details Time Measurement APIs and services.
 * @{
 */

#include "ch.h"

#if CH_CFG_USE_TM || defined(__DOXYGEN__)

/*===========================================================================*/
/* Module local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module local types.                                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module local variables.                                                   */
/*===========================================================================*/

/**
 * @brief   Measurement calibration value.
 */
static rtcnt_t measurement_offset;

/*===========================================================================*/
/* Module local functions.                                                   */
/*===========================================================================*/

static inline void tm_stop(time_measurement_t *tmp,
                           rtcnt_t now,
                           rtcnt_t offset) {

  tmp->n++;
  tmp->last = now - tmp->last - offset;
  tmp->cumulative += (rttime_t)tmp->last;
  if (tmp->last > tmp->worst)
    tmp->worst = tmp->last;
  else if (tmp->last < tmp->best)
    tmp->best = tmp->last;
}

/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Initializes the time measurement unit.
 *
 * @init
 */
void _tm_init(void) {
  time_measurement_t tm;

  /* Time Measurement subsystem calibration, it does a null measurement
     and calculates the call overhead which is subtracted to real
     measurements.*/
  measurement_offset = 0;
  chTMObjectInit(&tm);
  chTMStartMeasurementX(&tm);
  chTMStopMeasurementX(&tm);
  measurement_offset = tm.last;
}

/**
 * @brief   Initializes a @p TimeMeasurement object.
 *
 * @param[out] tmp      pointer to a @p TimeMeasurement structure
 *
 * @init
 */
void chTMObjectInit(time_measurement_t *tmp) {

  tmp->best       = (rtcnt_t)-1;
  tmp->worst      = (rtcnt_t)0;
  tmp->last       = (rtcnt_t)0;
  tmp->n          = (ucnt_t)0;
  tmp->cumulative = (rttime_t)0;
}

/**
 * @brief   Starts a measurement.
 * @pre     The @p time_measurement_t structure must be initialized.
 *
 * @param[in,out] tmp   pointer to a @p TimeMeasurement structure
 *
 * @xclass
 */
NOINLINE void chTMStartMeasurementX(time_measurement_t *tmp) {

  tmp->last = chSysGetRealtimeCounterX();
}

/**
 * @brief   Stops a measurement.
 * @pre     The @p time_measurement_t structure must be initialized.
 *
 * @param[in,out] tmp   pointer to a @p time_measurement_t structure
 *
 * @xclass
 */
NOINLINE void chTMStopMeasurementX(time_measurement_t *tmp) {

  tm_stop(tmp, chSysGetRealtimeCounterX(), measurement_offset);
}

#endif /* CH_CFG_USE_TM */

/**
 * @brief   Stops a measurement and chains to the next one using the same time
 *          stamp.
 *
 * @param[in,out] tmp1  pointer to the @p time_measurement_t structure to be
 *                      stopped
 * @param[in,out] tmp2  pointer to the @p time_measurement_t structure to be
 *                      started
 *
 *
 * @xclass
 */
NOINLINE void chTMChainMeasurementToX(time_measurement_t *tmp1,
                                      time_measurement_t *tmp2) {

  /* Starts new measurement.*/
  tmp2->last = chSysGetRealtimeCounterX();

  /* Stops previous measurement using the same time stamp.*/
  tm_stop(tmp1, tmp2->last, 0);
}

/** @} */