################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../main.c \
../my_7seg.c \
../my_ADC.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
main.o \
my_7seg.o \
my_ADC.o

OBJS_AS_ARGS +=  \
main.o \
my_7seg.o \
my_ADC.o

C_DEPS +=  \
main.d \
my_7seg.d \
my_ADC.d

C_DEPS_AS_ARGS +=  \
main.d \
my_7seg.d \
my_ADC.d

OUTPUT_FILE_PATH +=AT8_Czujnik_wilgotnosci_gleby.elf

OUTPUT_FILE_PATH_AS_ARGS +=AT8_Czujnik_wilgotnosci_gleby.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega8a -B "E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega8a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./my_7seg.o: .././my_7seg.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega8a -B "E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega8a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./my_ADC.o: .././my_ADC.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega8a -B "E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega8a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="AT8_Czujnik_wilgotnosci_gleby.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega8a -B "E:\Microchip Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega8a"  
	@echo Finished building target: $@
	"E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "AT8_Czujnik_wilgotnosci_gleby.elf" "AT8_Czujnik_wilgotnosci_gleby.hex"
	"E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "AT8_Czujnik_wilgotnosci_gleby.elf" "AT8_Czujnik_wilgotnosci_gleby.eep" || exit 0
	"E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "AT8_Czujnik_wilgotnosci_gleby.elf" > "AT8_Czujnik_wilgotnosci_gleby.lss"
	"E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "AT8_Czujnik_wilgotnosci_gleby.elf" "AT8_Czujnik_wilgotnosci_gleby.srec"
	"E:\Microchip Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "AT8_Czujnik_wilgotnosci_gleby.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "AT8_Czujnik_wilgotnosci_gleby.elf" "AT8_Czujnik_wilgotnosci_gleby.a" "AT8_Czujnik_wilgotnosci_gleby.hex" "AT8_Czujnik_wilgotnosci_gleby.lss" "AT8_Czujnik_wilgotnosci_gleby.eep" "AT8_Czujnik_wilgotnosci_gleby.map" "AT8_Czujnik_wilgotnosci_gleby.srec" "AT8_Czujnik_wilgotnosci_gleby.usersignatures"
	