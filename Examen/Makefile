.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = intlist countint countchar1 countchar2 tconvert revert

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)

