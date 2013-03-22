[#ftl]
[@pp.dropOutputFile /]
[@pp.changeOutputFile name="adc_lld_cfg.h" /]
/*
 * Licensed under ST Liberty SW License Agreement V2, (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *        http://www.st.com/software_license_agreement_liberty_v2
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file    adc_lld_cfg.h
 * @brief   ADC Driver configuration macros and structures.
 *
 * @addtogroup ADC
 * @{
 */

#ifndef _ADC_LLD_CFG_H_
#define _ADC_LLD_CFG_H_

#if HAL_USE_ADC || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    Conversion groups constants
 * @{
 */
[#list conf.instance.conversion_groups.groups.conversion_group_settings as group]
  [#assign name = group.symbolic_name[0]?upper_case /]
#define ADC_GROUP_${name}_NUM_CHANNELS ${group.channels.sequence?size}
#define ADC_GROUP_${name}_BUF_DEPTH    ${group.maximum_sequential[0]}
#define ADC_GROUP_${name}_NUM_COMMANDS (ADC_GROUP_${name}_NUM_CHANNELS * ADC_GROUP_${name}_BUF_DEPTH)
  [#if group_has_next]

  [/#if]
[/#list]
/** @} */

/**
 * @name    Simplified names for the conversion groups
 * @{
 */
[#list conf.instance.conversion_groups.groups.conversion_group_settings as group]
  [#assign name = group.symbolic_name[0]?trim /]
#define ${name?upper_case} &adc_group_${name}
[/#list]
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

/* List of the ADCConversionGroup structures defined in adc_lld_cfg.c.*/
[#list conf.instance.conversion_groups.groups.conversion_group_settings as group]
extern const ADCConversionGroup adc_group_${group.symbolic_name[0]?trim};
[/#list]

#ifdef __cplusplus
extern "C" {
#endif
  /* List of the callback functions referenced from the ADCConversionGroup
     structures in adc_lld_cfg.c.*/
[#assign conv_callbacks = []]
[#assign err_callbacks = []]
[#list conf.instance.conversion_groups.groups.conversion_group_settings as group]
  [#assign conv_cb = group.notifications.conversion_callback[0]?string?trim /]
  [#assign err_cb = group.notifications.error_callback[0]?string?trim /]
  [#if !conv_callbacks?seq_contains(conv_cb)]
    [#assign conv_callbacks = conv_callbacks + [conv_cb]]
  [/#if]
  [#if !err_callbacks?seq_contains(err_cb)]
    [#assign err_callbacks = err_callbacks + [err_cb]]
  [/#if]
[/#list]
[#list conv_callbacks?sort as cb]
  void ${cb}(ADCDriver *adcp, adcsample_t *buffer, size_t n);
[/#list]
[#list err_callbacks?sort as cb]
  void ${cb}(ADCDriver *adcp, adcerror_t err);
[/#list]
#ifdef __cplusplus
}
#endif

#endif /* HAL_USE_ADC */

#endif /* _ADC_LLD_CFG_H_ */

/** @} */