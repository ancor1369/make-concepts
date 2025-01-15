CC=gcc

SOURCES=main.c
OBJECTS=main.o
BINARY=main

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)
