################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/continue\ and\ break.c 

C_DEPS += \
./src/continue\ and\ break.d 

OBJS += \
./src/continue\ and\ break.o 


# Each subdirectory must supply rules for building sources it contributes
src/continue\ and\ break.o: ../src/continue\ and\ break.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/continue and break.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/continue\ and\ break.d ./src/continue\ and\ break.o

.PHONY: clean-src

