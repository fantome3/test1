################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BorneFontaineTesteur.cpp \
../BorneStationnementTesteur.cpp \
../BorneTesteur.cpp \
../RegistreBorneTesteur.cpp 

OBJS += \
./BorneFontaineTesteur.o \
./BorneStationnementTesteur.o \
./BorneTesteur.o \
./RegistreBorneTesteur.o 

CPP_DEPS += \
./BorneFontaineTesteur.d \
./BorneStationnementTesteur.d \
./BorneTesteur.d \
./RegistreBorneTesteur.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -I"/home/etudiant/Bureau/TP4 bon/source" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


