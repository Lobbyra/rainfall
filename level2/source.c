#include <stdio.h>

void p(void) {
	fflush(stdout);
	char buf[72];
	gets(buf);
	// EIP PROTECTION CONDITION
	puts(buf);
	strdup(buf);
}

int main (void) {
    p ();
}

