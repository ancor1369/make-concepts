.PHONY: clean install-pkg-config

CC=g++

SOURCES=main.cpp helper.cpp
OBJECTS=main.o helper.o
BINARY=main.bin
LIB_FLAGS=$(pkg-config nlohmann-json --cflags)

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS) $(LIB_FLAGS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.cpp
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)

install-pkg-config: 
	cp pkg-config/nlohmann-json.pc /usr/share/pkgconfig

