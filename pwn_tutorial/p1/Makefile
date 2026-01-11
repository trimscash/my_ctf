
# gcc -fno-stack-protector -o p1 p1.c
CC = gcc
CFLAGS = -fno-stack-protector 

all: p1

chall: p1.c FORCE
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm -f p

.PHONY: all FORCE
