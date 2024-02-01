# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Source files
SRCS = blas.c

# Executable
TARGET = blas

# Default target
all: $(TARGET)

# Compile source files into executable
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

mac:
	$(CC) -o blas-mac blas-mac.c -framework Accelerate

# Clean up executable
clean:
	rm -f $(TARGET)
