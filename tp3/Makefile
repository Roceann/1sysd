.PHONY: all clean

PROGS=game float calc tableau numbers1 numbers2 numbers3 numbers4 ascii sum
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< -lm 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s
