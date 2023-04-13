#include <stdio.h>

void main() {
	char *auth = NULL;
	char *service = NULL;
	char buf[128];
	while (1) {
		fgets(buf, stdin, 128);
		if (strcmp(buf, "auth ") == 0) {
			auth = strdup(buf + 5);
			continue;
		}
		if (strcmp(buf, "reset") == 0) {
			free(auth);
			continue;
		}
		if (strcmp(buf, "service") == 0) {
			service = strdup(buf + 7);
			continue;
		}
		if (strcmp(buf, "login") == 0) {
			if (buf[32] == '\0') {
				system ("/bin/sh");
			} else {
				printf("Password: ");
			}
		}
	}
}
