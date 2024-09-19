EXECUTABLE := prog

OBJECTS := \
  main.o \
	func.o \
	hierarchical-logger.o

$(EXECUTABLE): $(OBJECTS)
	gcc -o $@ $^

%.o: %.c hierarchical-logger.h
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
