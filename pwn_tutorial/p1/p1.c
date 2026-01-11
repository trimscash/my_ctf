#include <stdio.h>

int main() {
	char a = 0xaa;
	char buf[10] = {0};

	printf("a: %p \nb: %p\n", &a, buf);
	printf("What's your name: ");

	fgets(buf, 20, stdin);

	if (a != (char)0xaa) {
		system("/bin/sh");
	}

	printf("HELLO CTF!, %s\n", buf);
	return 0;
}
