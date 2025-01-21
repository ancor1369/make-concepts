-include .config

CC=g++

SOURCES=main.cpp helper.cpp
OBJECTS=main.o helper.o
BINARY=main.bin

ifeq ($(CONFIG_INCLUDE_OPTIONAL_SOURCE),y)
    CFLAGS += -DINCLUDE_OPTIONAL_SOURCE
    OBJ += optional_source.o
endif

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)

menuconfig:
	mkdir -p configs
	@kconfig-mconf Kconfig
