CC = g++
CFLAGS = -Wall
LDFLAGS = -lncurses
TARGET = filt

all: $(TARGET)

$(TARGET): filt.cpp
	$(CC) $(CFLAGS) -o $(TARGET) filt.cpp $(LDFLAGS)

clean:
	rm -f $(TARGET)
