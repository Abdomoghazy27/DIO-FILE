################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BUTTON/BUTTON_Program.c \
../BUTTON/main.c 

OBJS += \
./BUTTON/BUTTON_Program.o \
./BUTTON/main.o 

C_DEPS += \
./BUTTON/BUTTON_Program.d \
./BUTTON/main.d 


# Each subdirectory must supply rules for building sources it contributes
BUTTON/%.o: ../BUTTON/%.c BUTTON/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


