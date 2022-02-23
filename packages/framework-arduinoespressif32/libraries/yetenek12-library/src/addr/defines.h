#ifndef DEFINES_H
#define DEFINES_H

#define HOLDING_REGISTERS   0x03
#define INPUT_REGISTERS     0x04

#define MAX_SLAVE_RESPONSE_LENGTH   16        //default was 32
#define MODBUS_SPEED                38400


// Common Registers
#define ADDR_C_TYPE             1  // Sensor Type
#define ADDR_C_SERIAL_NUMBER    2  // Serial Number (16 bit)
#define ADDR_C_MODEL_NUMBER     3  // Model Number (16 bit)
#define ADDR_C_SW_VER           4  // Software Version (16 bit)
#define ADDR_C_HW_VER           5  // Hardware Version (16 bit)
#define ADDR_C_DEF_I2C_ADDR     6  // Default I2C Address (8 bit)
#define ADDR_C_DEF_MODBUS_ADDR  7  // Default ModBus Address (16 bit)
#define ADDR_C_CURR_I2C_ADDR    8  // Current I2C Address (8 bit)
#define ADDR_C_CURR_MODBUS_ADDR 9  // Current ModBus Address (16 bit)

#define ADDR_C_SET_I2C_ADDR     10  // Set I2C Address (8 bit)
#define ADDR_C_SET_MODBUS_ADDR  11  // Set ModBus Address (16 bit)


// Led Registers
#define ADDR_LEDM	        20  // Led Mode: 0> Default 1> Programmable
#define ADDR_LEDR	        21
#define ADDR_LEDG           22
#define ADDR_LEDB           23
#define ADDR_LEDW           24
#define ADDR_LEDT           25 // Brightness


// IO Board
#define ADDR_IO_1           30
#define ADDR_IO_2           31
#define ADDR_IO_3           32
#define ADDR_IO_4           33
#define ADDR_IO_5           34
#define ADDR_IO_6           35

#define ADDR_IO_ADC1        30
#define ADDR_IO_ADC2        31
#define ADDR_IO_ADC3        32
#define ADDR_IO_ADC4        33
#define ADDR_IO_ADC1_V_MSB  34
#define ADDR_IO_ADC1_V_LSB  35
#define ADDR_IO_ADC2_V_MSB  36
#define ADDR_IO_ADC2_V_LSB  37
#define ADDR_IO_ADC3_V_MSB  38
#define ADDR_IO_ADC3_V_LSB  39
#define ADDR_IO_ADC4_V_MSB  40
#define ADDR_IO_ADC4_V_LSB  41
#define ADDR_IO_ADC_CONFIG  42
#define ADDR_IO_A1          43 // Output Ports
#define ADDR_IO_A2          44
#define ADDR_IO_A3          45
#define ADDR_IO_A4          46
#define ADDR_IO_A5          47
#define ADDR_IO_A6          48
#define ADDR_IO_A7          49
#define ADDR_IO_A8          50
#define ADDR_IO_B1          51 // Input Ports
#define ADDR_IO_B2          52
#define ADDR_IO_B3          53
#define ADDR_IO_B4          54
#define ADDR_IO_B5          55
#define ADDR_IO_B6          56
#define ADDR_IO_B7          57
#define ADDR_IO_B8          58


// AIR MIC SGP Module
#define ADDR_AMS_1          40 // Default
#define ADDR_AMS_2          41
#define ADDR_AMS_3          42
#define ADDR_AMS_4          43
#define ADDR_AMS_5          44
#define ADDR_AMS_6          45

#define ADDR_AMS_SF         30 // Sound Frequency
#define ADDR_AMS_SA         31 // Sound Amplitude
#define ADDR_AMS_A          32 // UV A
#define ADDR_AMS_B          33 // UV B
#define ADDR_AMS_I          34 // UV Index
#define ADDR_AMS_TMP	    35 // BME Temperature
#define ADDR_AMS_HUM	    36 // BME Humidity
#define ADDR_AMS_PRE	    37 // BME Pressure
#define ADDR_AMS_ALT	    38 // BME Altitiude
#define ADDR_AMS_BME_C	    39 // Config: BME Filter Options
#define ADDR_AMS_CO2        40 // SGP30 CO2
#define ADDR_AMS_TVOC       41 // SGP30 TVOC
#define ADDR_AMS_H2         42 // SGP30 H2
#define ADDR_AMS_ETH        43 // SGP30 ETHANOL


// TOF RGB UV Module
#define ADDR_TRU_1          50 // Default
#define ADDR_TRU_2          51
#define ADDR_TRU_3          52
#define ADDR_TRU_4          53
#define ADDR_TRU_5          54
#define ADDR_TRU_6          55

#define ADDR_TRU_DIS        30 // Distance
#define ADDR_TRU_DIS_STA    31 // Distance Status
#define ADDR_TRU_DIS_M      32 // Config: Distance Reading Mode
#define ADDR_TRU_A          33 // UV A
#define ADDR_TRU_B          34 // UV B
#define ADDR_TRU_I          35 // UV Index
#define ADDR_TRU_UV_I	    36 // Config: UV Integration Time
#define ADDR_TRU_UV_S	    37 // Config: UV setHighDynamic
#define ADDR_TRU_C_R        38 // Color Red
#define ADDR_TRU_C_G        39 // Color Green
#define ADDR_TRU_C_B        40 // Color Blue
#define ADDR_TRU_C_C        41 // Color C
#define ADDR_TRU_C_T        42 // Color Temp
#define ADDR_TRU_C_L        43 // Color Temp
#define ADDR_TRU_C_CONF     44 // Color Config
#define ADDR_TRU_IR         45 // IR Sensor


// 9DoF Sensor
#define ADDR_DOF9_1      60 // Default
#define ADDR_DOF9_2      61
#define ADDR_DOF9_3      62
#define ADDR_DOF9_4      63
#define ADDR_DOF9_5      64
#define ADDR_DOF9_6      65

#define ADDR_ACCX        30
#define ADDR_ACCY        31
#define ADDR_ACCZ        32
#define ADDR_GYRX        33
#define ADDR_GYRY        34
#define ADDR_GYRZ        35
#define ADDR_MAGX        36
#define ADDR_MAGY        37
#define ADDR_MAGZ        38
#define ADDR_HDG         39
#define ADDR_TEMP9       40
#define ADDR_ACCMODE     41
#define ADDR_GYRMODE     42
#define ADDR_CMPMODE     43



// //OLED
// #define ADDR_OLED           60 //60 or 61

// //PT1000 MAX31865 TEMPERATURE SENSOR
// #define ADDR_TEMP           65
// //#define ADDR_TEMPERATURE    50

// #define ADDR_MOTOR       85
// #define ADDR_MOTOR_MODE  ADDR_MOTOR
// #define ADDR_SDIR        ADDR_MOTOR+1             //Set direction
// #define ADDR_SSPD        ADDR_MOTOR+2           //Set speed
// #define ADDR_CDIR        ADDR_MOTOR+3             //Current direction
// #define ADDR_CSPD        ADDR_MOTOR+4             //Current speed
// #define ADDR_ACONS       ADDR_MOTOR+5             //Current consumption
// #define ADDR_ALIMIT      ADDR_MOTOR+6             //Current consumption
// #endif

#endif