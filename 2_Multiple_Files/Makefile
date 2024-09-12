CC=g++

all: main.o helper.o
	$(CC) -o main.bin main.o helper.o

main.o:	main.cpp
	$(CC) -c main.cpp

helper.o: helper.cpp
	$(CC) -c helper.cpp

clean:
	rm main.o main.bin helper.o
