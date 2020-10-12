CC = gcc
CFLAGS = -Wall -pedantic

BIN = error_logger.out
SRC = error_logger.c

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm $(BIN)
