CC = g++
CFLAGS = -O3
VFLAGS = -std=c++17
LDFLAGS = -lncurses
CDFLAGS = -g
TARGET = a.out
DTARGET = d_$(TARGET)
WARNINGS = -w -Wall -pedantic
<<<<<<< HEAD
CPP = main.cpp room.cpp organ.cpp
=======
CPP = main.cpp room.cpp
>>>>>>> f36f396e66d3974d645ce66c57c526aa69aeeec7

all:
	$(CC) $(WARNINGS) $(VFLAGS) $(CFLAGS) $(CPP) $(LDFLAGS) -o $(TARGET)

debug:
	$(CC) $(WARNINGS) $(VFLAGS) $(CDFLAGS) $(CPP) $(LDFLAGS) -o $(DTARGET)

clean:
	rm -rf $(TARGET) $(DTARGET)
