# Define the compiler
CC=gcc

# Define the executable file name
EXEC=todo

# Define source files
SRC=main.c utility.c

# Define object files
OBJ=$(SRC:.c=.o)

# Default target
all: build

# Build target
build: $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

# Run target
run: build
	./$(EXEC)

# Clean target
clean:
	rm -f $(EXEC) $(OBJ)

# Rule for object files
%.o: %.c
	$(CC) -c $< -o $@