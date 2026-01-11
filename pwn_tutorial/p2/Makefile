
# gcc -fno-stack-protector -o p1 p1.c
CC = gcc
CFLAGS = -fno-stack-protector 

all: p2

chall: p2.c FORCE
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f p2

.PHONY: all FORCE
