################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/Pcl1BaseVisitor.cpp \
../target/generated-sources/antlr4/Pcl1Lexer.cpp \
../target/generated-sources/antlr4/Pcl1Parser.cpp \
../target/generated-sources/antlr4/Pcl1Visitor.cpp 

OBJS += \
./target/generated-sources/antlr4/Pcl1BaseVisitor.o \
./target/generated-sources/antlr4/Pcl1Lexer.o \
./target/generated-sources/antlr4/Pcl1Parser.o \
./target/generated-sources/antlr4/Pcl1Visitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/Pcl1BaseVisitor.d \
./target/generated-sources/antlr4/Pcl1Lexer.d \
./target/generated-sources/antlr4/Pcl1Parser.d \
./target/generated-sources/antlr4/Pcl1Visitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/zachary/eclipse-workspace/ExprCpp" -I"/home/zachary/eclipse-workspace/ExprCpp/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


