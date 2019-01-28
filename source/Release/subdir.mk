################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Borne.cpp \
../BorneFontaine.cpp \
../BorneStationnement.cpp \
../ContratException.cpp \
../RegistreBorne.cpp \
../outil.cpp \
../principale.cpp \
../validationFormat.cpp 

OBJS += \
./Borne.o \
./BorneFontaine.o \
./BorneStationnement.o \
./ContratException.o \
./RegistreBorne.o \
./outil.o \
./principale.o \
./validationFormat.o 

CPP_DEPS += \
./Borne.d \
./BorneFontaine.d \
./BorneStationnement.d \
./ContratException.d \
./RegistreBorne.d \
./outil.d \
./principale.d \
./validationFormat.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


