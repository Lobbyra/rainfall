#include <stdio.h>

int m = 0;

void v() {
	char buf[512];
	fgets(buf, 512, stdin);
	printf(buf);
	if (m == 64) {
		fwrite("Wait what?!\n", 1, 0xc, stdout);
        	system("/bin/sh");
	}
	return ;
}

int main() {
	v();
}
