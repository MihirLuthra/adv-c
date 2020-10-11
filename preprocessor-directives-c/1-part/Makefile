CC = gcc
CFLAGS = -Wall -pedantic

BIN = macro.out
SRC = macro.c

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm $(BIN)
