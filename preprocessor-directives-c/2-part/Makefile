CC = gcc
CFLAGS = -Wall -pedantic

BIN = swap.out
SRC = swap.c

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm $(BIN)
