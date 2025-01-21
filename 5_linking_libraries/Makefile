CC=g++

SOURCES=main.cpp helper.cpp
OBJECTS=main.o helper.o
BINARY=main.bin
LIB_FLAGS=-lncurses

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS) $(LIB_FLAGS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)
