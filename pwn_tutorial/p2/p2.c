#include <stdio.h>

int win() {
	asm volatile("mov $0,%spl");  // 問題簡単のためにここでrspを0x10境界にする．https://sok1.hatenablog.com/entry/2022/01/17/050710
	printf("you win!\n");
	system("/bin/sh");
	return 0;
}

int main() {
	char buf[16] = {0};

	printf("win: %p\n\n", win);
	printf("What's your name: ");

	fgets(buf, 100, stdin);

	printf("HELLO CTF!, %s\n", buf);
	return 0;
}
