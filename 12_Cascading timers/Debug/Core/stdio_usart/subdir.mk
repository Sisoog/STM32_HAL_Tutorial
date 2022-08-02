################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/stdio_usart/stdio_usart.c 

OBJS += \
./Core/stdio_usart/stdio_usart.o 

C_DEPS += \
./Core/stdio_usart/stdio_usart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/stdio_usart/%.o Core/stdio_usart/%.su: ../Core/stdio_usart/%.c Core/stdio_usart/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"D:/projects/STM32F103C8 (blue pill)/HAL/12_Cascading timers/Core/stdio_usart" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-stdio_usart

clean-Core-2f-stdio_usart:
	-$(RM) ./Core/stdio_usart/stdio_usart.d ./Core/stdio_usart/stdio_usart.o ./Core/stdio_usart/stdio_usart.su

.PHONY: clean-Core-2f-stdio_usart

