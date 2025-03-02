/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

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

/**
 * @file    templates/halconf.h
 * @brief   HAL configuration header.
 * @details HAL configuration file, this file allows to enable or disable the
 *          various device drivers from your application. You may also use
 *          this file in order to override the device drivers default settings.
 *
 * @addtogroup HAL_CONF
 * @{
 */

#ifndef HALCONF_EECV_H
#define HALCONF_EECV_H

//#include "../../../hw_layer/ports/stm32/stm32f4/cfg/halconf.h"

/**
* @brief   Enables the SDC subsystem.
*/
#if !defined(HAL_USE_SDC) || defined(__DOXYGEN__)
#define HAL_USE_SDC                         TRUE
#endif

#endif /* HALCONF_EECV_H */
