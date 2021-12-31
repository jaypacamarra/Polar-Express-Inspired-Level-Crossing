################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CLC_Sys/tasks/state_machine/state_machine.c 

OBJS += \
./CLC_Sys/tasks/state_machine/state_machine.o 

C_DEPS += \
./CLC_Sys/tasks/state_machine/state_machine.d 


# Each subdirectory must supply rules for building sources it contributes
CLC_Sys/tasks/state_machine/state_machine.o: ../CLC_Sys/tasks/state_machine/state_machine.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/software_timers" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/include" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/sensor_read" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/OS" -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/Config" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/SEGGER/SEGGER" -I../Inc -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F" -I../Drivers/CMSIS/Include -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/intersection_ctrl" -I"G:/My Drive/1. Engineering/Projects/PROJ-022 - Christmas Level Crossing/Software/Polar-Express-Inspired-Level-Crossing/CLC_Sys/tasks/state_machine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"CLC_Sys/tasks/state_machine/state_machine.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
