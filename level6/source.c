
void n() {
	system ("/bin/cat /home/user/level7/.pass");
}

void m() {
	puts("Nope");
}

int main(int argc, char **argv) {
	char *buf = malloc(64);
	void *(*fun)(void) = malloc(4);
	*fun = &m;
	strcpy(buf, argv[1]);
	fun();
}
