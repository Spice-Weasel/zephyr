/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Carl Zeiss Meditec AG
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_SENSOR_ADLTC2990_REG_H
#define ZEPHYR_DRIVERS_SENSOR_ADLTC2990_REG_H

#define ADLTC2990_REG_STATUS            0x00U
#define ADLTC2990_REG_CONTROL           0x01U
#define ADLTC2990_REG_TRIGGER           0x02U
#define ADLTC2990_REG_UNUSED            0x03U
#define ADLTC2990_REG_INTERNAL_TEMP_MSB 0x04U
#define ADLTC2990_REG_INTERNAL_TEMP_LSB 0x05U
#define ADLTC2990_REG_V1_MSB            0x06U
#define ADLTC2990_REG_V1_LSB            0x07U
#define ADLTC2990_REG_V2_MSB            0x08U
#define ADLTC2990_REG_V2_LSB            0x09U
#define ADLTC2990_REG_V3_MSB            0x0AU
#define ADLTC2990_REG_V3_LSB            0x0BU
#define ADLTC2990_REG_V4_MSB            0x0CU
#define ADLTC2990_REG_V4_LSB            0x0DU
#define ADLTC2990_REG_VCC_MSB           0x0EU
#define ADLTC2990_REG_VCC_LSB           0x0FU

#define ADLTC2990_VOLTAGE_SINGLE_ENDED_VALUES 2U
#define ADLTC2990_VOLTAGE_DIFF_VALUES         1U
#define ADLTC2990_TEMP_VALUES                 1U
#define ADLTC2990_CURRENT_VALUES              1U
#define ADLTC2990_MICROOHM_CONVERSION_FACTOR  1000000U

#define ADLTC2990_MODE_V1_V2_TR2               0U
#define ADLTC2990_MODE_V1_MINUS_V2_TR2         1U
#define ADLTC2990_MODE_V1_MINUS_V2_V3_V4       2U
#define ADLTC2990_MODE_TR1_V3_V4               3U
#define ADLTC2990_MODE_TR1_V3_MINUS_V4         4U
#define ADLTC2990_MODE_TR1_TR2                 5U
#define ADLTC2990_MODE_V1_MINUS_V2_V3_MINUS_V4 6U
#define ADLTC2990_MODE_V1_V2_V3_V4             7U

#define ADLTC2990_MEASURE_INTERNAL_TEMPERATURE_ONLY 0U
#define ADLTC2990_MEASURE_PINS_V1_V2_ONLY           1U
#define ADLTC2990_MEASURE_PINS_V3_V4_ONLY           2U
#define ADLTC2990_MEASURE_ALL_PINS_PER_MODE_2_0     3U

#define ADLTC2990_VOLTAGE_SINGLEENDED_CONVERSION_FACTOR 30518
#define ADLTC2990_VOLTAGE_DIFFERENTIAL_CONVERSION_FACTOR 1942
#define ADLTC2990_TEMPERATURE_CONVERSION_FACTOR 62500

#define ADLTC2990_MODE_2_0_MAX_VALUE 7U
#define ADLTC2990_MODE_4_3_MAX_VALUE 3U

#endif /* ZEPHYR_DRIVERS_SENSOR_ADLTC2990_REG_H */