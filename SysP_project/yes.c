#include <string.h>
#include <stdio.h>

void printString(const char* input) {

	while (1) {
		printf("%s\n", input);
	}
}

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printString("y\n");
	}

	printString(argv[1]);

	return 0;
}