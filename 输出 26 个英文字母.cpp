#include <stdio.h>
int main() {
	for (int i = 97; i < 123; i++) {
		char a = i;
		printf("%c ", a);
	}
	printf("\n");
	for (int i = 122; i > 96; i--) {
		char a = i;
		printf("%c ", a);
	}
}