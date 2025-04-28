.PHONY: clean

CROSS_COMPILE=
CC=g++

SOURCES=main.cpp helper.cpp
OBJECTS=main.o helper.o
BINARY=main.bin


LIB_PATH = /home/andres-lnx500/Documents/playground/json/include
LIB_NAME = 

LIB_FLAGS = -I$(LIB_PATH)


all: $(OBJECTS)
	$(CROSS_COMPILE)$(CC) -o $(BINARY) $(OBJECTS) $(LIB_FLAGS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CROSS_COMPILE)$(CC) -c -o $@ $^ $(LIB_FLAGS)

clean:
	rm $(OBJECTS) $(BINARY)


