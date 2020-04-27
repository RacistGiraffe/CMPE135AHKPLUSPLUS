################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ExprMain.cpp \
../Pass1Visitor.cpp \
../Pass2Visitor.cpp 

OBJS += \
./ExprMain.o \
./Pass1Visitor.o \
./Pass2Visitor.o 

CPP_DEPS += \
./ExprMain.d \
./Pass1Visitor.d \
./Pass2Visitor.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/zachary/eclipse-workspace/ExprCpp" -I"/home/zachary/eclipse-workspace/ExprCpp/wci" -I"/home/zachary/eclipse-workspace/ExprCpp/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


