################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/stm32f4xx_hal_msp.c \
../Src/stm32f4xx_hal_timebase_tim.c \
../Src/stm32f4xx_it.c \
../Src/syscalls.c \
../Src/system_stm32f4xx.c 

OBJS += \
./Src/main.o \
./Src/stm32f4xx_hal_msp.o \
./Src/stm32f4xx_hal_timebase_tim.o \
./Src/stm32f4xx_it.o \
./Src/syscalls.o \
./Src/system_stm32f4xx.o 

C_DEPS += \
./Src/main.d \
./Src/stm32f4xx_hal_msp.d \
./Src/stm32f4xx_hal_timebase_tim.d \
./Src/stm32f4xx_it.d \
./Src/syscalls.d \
./Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/main.o: ../Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32f4xx_hal_msp.o: ../Src/stm32f4xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32f4xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32f4xx_hal_timebase_tim.o: ../Src/stm32f4xx_hal_timebase_tim.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32f4xx_hal_timebase_tim.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32f4xx_it.o: ../Src/stm32f4xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32f4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/system_stm32f4xx.o: ../Src/system_stm32f4xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/system_stm32f4xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

