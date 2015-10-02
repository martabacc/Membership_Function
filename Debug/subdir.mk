################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Main.cpp \
../Membership.cpp \
../Trapesoidal.cpp \
../Triangular.cpp 

OBJS += \
./Main.o \
./Membership.o \
./Trapesoidal.o \
./Triangular.o 

CPP_DEPS += \
./Main.d \
./Membership.d \
./Trapesoidal.d \
./Triangular.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


