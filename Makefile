SDCC=/usr/bin/sdcc
SDLD=sdld

CHIP = STM8S003
CHIP_LCASE  = $(shell echo $(CHIP) | tr '[:upper:]' '[:lower:]')

DEFINES = -DNOP_DELAY -D$(CHIP) -DUSER_APP

#CFLAGS = -lstm8 -mstm8 $(DEFINES) -I. --all-callee-saves --debug --verbose --stack-auto --fverbose-asm  --float-reent --no-peep
CFLAGS = -lstm8 -mstm8 $(DEFINES) -I. --verbose --opt-code-size --all-callee-saves

MAIN_SOURCE = main 
SOURCES = init interrupt delay eeprom adc calibration

all: clean build

build: $(MAIN_SOURCE:=.ihx)

$(MAIN_SOURCE:=.ihx): $(MAIN_SOURCE:=.rel) $(SOURCES:=.rel)
	$(SDCC) $(CFLAGS) --out-fmt-ihx $(MAIN_SOURCE:=.rel) $(SOURCES:=.rel)

clean:
	rm -f *.slt *.ihx *.elf *.lk *.sym *.rst *.asm *.cdb *.lst *.map *.rel

%.rel: %.c
	$(SDCC) -c $(CFLAGS) $<

