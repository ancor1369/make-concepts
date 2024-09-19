CC=g++

SOURCES=main.cpp helper.cpp
OBJECTS=main.o helper.o
BINARY=main.bin

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)
