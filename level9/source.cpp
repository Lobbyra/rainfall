#include <string>
#include <iostream>
#include <cstring>

class N {
	public:
		int n;
		char annotation[80];
		N(int num): n(num) {};

		int operator+(N const &b) const {
			N second(0);
			second.n = n + b.n;
			return second.n;
		};
		int operator-(N const &b) const {
			N second(0);
			second.n = n - b.n;
			return second.n;
		};
		void setAnnotation(char *str) {
			memcpy(annotation, str, strlen(str));
		};
};


int main(int argc, char **argv) {
	N *n1 = new N(5);
	N *n2 = new N(6);

	if (argc < 2) {
		exit(1);
	}
	n1->setAnnotation(argv[1]);
	return (*n1+*n2);
}
