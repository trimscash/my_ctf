
# gcc -fno-stack-protector -o p1 p1.c
CC = gcc
CFLAGS = -fno-stack-protector 

all: p2

chall: p2.c FORCE
	$(CC) $(CFLAGS) -o $@ $<

FORCE:

.PHONY: all FORCE
