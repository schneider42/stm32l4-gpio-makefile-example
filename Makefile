CC = arm-none-eabi-gcc
LD = arm-none-eabi-gcc
AR = arm-none-eabi-ar
AS = arm-none-eabi-as
OBJCOPY = arm-none-eabi-objcopy
OD = arm-none-eabi-objdump
SIZE = arm-none-eabi-size

OCFLAGS = --strip-unneeded

CFLAGS = -DSTM32L433xx
CFLAGS += -I./CMSIS/Include/
CFLAGS += -I./STM32L4xx_HAL_Driver/Inc
CFLAGS += -I./CMSIS/Device/ST/STM32L4xx/Include/
CFLAGS += -I./ -c -fno-common -Os -g -mcpu=cortex-m4 -mthumb -Wall -ffunction-sections -fdata-sections -fno-builtin -Wno-unused-function -ffreestanding
CFLAGS += -I./BSP/STM32L4xx_Nucleo_32/
LFLAGS = -Tstm32l4.ld -nostartfiles -Wl,--gc-sections

# our code
OBJS = main.o clock.o

# startup files
OBJS += handlers.o startup.o stm32l4xx_it.o assert.o

# drivers/lib
OBJS += STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_rcc.o
OBJS += STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_gpio.o
OBJS += STM32L4xx_HAL_Driver/Src/stm32l4xx_hal.o
OBJS += STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_cortex.o
OBJS += CMSIS/Device/ST/STM32L4xx/Source/Templates/system_stm32l4xx.o
OBJS += STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_pwr_ex.o

all: main.bin

clean:
	-rm -f $(OBJS) main.lst main.elf main.hex main.map main.bin main.list

main.elf: $(OBJS) stm32l4.ld
	$(LD) $(LFLAGS) -o main.elf $(OBJS)
	-@echo ""
	$(SIZE) main.elf
	-@echo ""

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<

%.bin: %.elf
	$(OBJCOPY) $(OCFLAGS) -O binary $< $@
