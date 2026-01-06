CC      = gcc
CFLAGS  = -Wall -Wextra -O2
LDFLAGS = -lm

TARGET = newton_solver

SRC = \
    main.c \
    functions_definitions.c \
    newton/newton.c

OBJ = $(SRC:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET)
	find . -type f -name "*.o" -delete
