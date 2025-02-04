CROSS_COMPILE=
CC=g++

SOURCES=dtb_parsing.c
OBJECTS=dtb_parsing.o
BINARY=dtb_parsing
LIBS=-lfdt

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS) $(LIBS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CROSS_COMPILE)$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)
