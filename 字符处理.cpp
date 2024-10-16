#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	if (a >= 65 && a <= 90) {
		printf("%c", a + 32);
	}
	else if (a >= 97 && a <= 122) {
		printf("%c", a - 32);
	}
	else {
		printf("%c", a);
	}
	return 0;
}