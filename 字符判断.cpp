#include<stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	if (a >= 65 && a <= 91) {
		printf("%c", a + 32);
	}
	else if (a >= 97 && a <= 123) {
		printf("%c", a - 32);
	}
	else if (a >= 48 && a <= 57) {
		printf("%c是数字",a);
	}
	else {
		printf("%c是其他字符",a);
	}
	return 0;
}