CC = g++
CFLAGS = -O3
VFLAGS = -std=c++17
LDFLAGS = -lncurses
CDFLAGS = -g
TARGET = a.out
DTARGET = d_$(TARGET)
WARNINGS = -w -Wall -pedantic
CPP = main.cpp room.cpp organ.cpp human.cpp

all:
	$(CC) $(WARNINGS) $(VFLAGS) $(CFLAGS) $(CPP) $(LDFLAGS) -o $(TARGET)

debug:
	$(CC) $(WARNINGS) $(VFLAGS) $(CDFLAGS) $(CPP) $(LDFLAGS) -o $(DTARGET)

clean:
	rm -rf $(TARGET) $(DTARGET)
