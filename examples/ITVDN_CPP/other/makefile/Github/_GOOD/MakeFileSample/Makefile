CC=g++
CFLAGS=-g -Wall
TARGET=sample
all: $(TARGET)
$(TARGET): src/$(TARGET).cc
	$(CC) $(CFLAGS) -o $(TARGET) src/$(TARGET).cc -I.
clean:
	$(RM) $(TARGET)
