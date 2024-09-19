EXECUTABLE := prog

# Object files
OBJECTS := main.o func.o hierarchical-logger.c

# Rule to link the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $(EXECUTABLE) $(OBJECTS)

# Rule to compile each object file from its corresponding .c source file
%.o: %.c
	$(CC) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
