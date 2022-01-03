################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ThirdParty/SEGGER/SEGGER/Syscalls/subdir.mk
-include ThirdParty/SEGGER/SEGGER/subdir.mk
-include ThirdParty/SEGGER/OS/subdir.mk
-include ThirdParty/SEGGER/Config/subdir.mk
-include ThirdParty/FreeRTOS/portable/MemMang/subdir.mk
-include ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F/subdir.mk
-include ThirdParty/FreeRTOS/subdir.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include CLC_Sys/tasks/state_machine/subdir.mk
-include CLC_Sys/tasks/sensor_read/subdir.mk
-include CLC_Sys/tasks/intersection_ctrl/subdir.mk
-include CLC_Sys/tasks/gate_ctrl/subdir.mk
-include CLC_Sys/software_timers/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
xmas_crossing_freertos.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
xmas_crossing_freertos.list \


# All Target
all: xmas_crossing_freertos.elf secondary-outputs

# Tool invocations
xmas_crossing_freertos.elf: $(OBJS) $(USER_OBJS) G:\My\ Drive\1.\ Engineering\Projects\PROJ-022\ -\ Christmas\ Level\ Crossing\Software\Polar-Express-Inspired-Level-Crossing\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "xmas_crossing_freertos.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"G:\My Drive\1. Engineering\Projects\PROJ-022 - Christmas Level Crossing\Software\Polar-Express-Inspired-Level-Crossing\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="xmas_crossing_freertos.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

xmas_crossing_freertos.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "xmas_crossing_freertos.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
