################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/MemertonsBaseVisitor.cpp \
../target/generated-sources/antlr4/MemertonsLexer.cpp \
../target/generated-sources/antlr4/MemertonsParser.cpp \
../target/generated-sources/antlr4/MemertonsVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/MemertonsBaseVisitor.o \
./target/generated-sources/antlr4/MemertonsLexer.o \
./target/generated-sources/antlr4/MemertonsParser.o \
./target/generated-sources/antlr4/MemertonsVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/MemertonsBaseVisitor.d \
./target/generated-sources/antlr4/MemertonsLexer.d \
./target/generated-sources/antlr4/MemertonsParser.d \
./target/generated-sources/antlr4/MemertonsVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/zachary/eclipse-workspace/ExprCpp" -I"/home/zachary/eclipse-workspace/ExprCpp/wci" -I"/home/zachary/eclipse-workspace/ExprCpp/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


