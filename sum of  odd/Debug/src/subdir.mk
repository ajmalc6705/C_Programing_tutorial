################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sum\ of\ \ odd.c 

C_DEPS += \
./src/sum\ of\ \ odd.d 

OBJS += \
./src/sum\ of\ \ odd.o 


# Each subdirectory must supply rules for building sources it contributes
src/sum\ of\ \ odd.o: ../src/sum\ of\ \ odd.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sum of  odd.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/sum\ of\ \ odd.d ./src/sum\ of\ \ odd.o

.PHONY: clean-src

