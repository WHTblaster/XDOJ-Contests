#include<stdio.h>
int main() {
	int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	switch (c) {
	case '+':
		printf("%d+%d=%d", a, b, a + b);
		break;
	case'-':
		printf("%d-%d=%d", a, b, a - b);
		break;
	case'*':
		printf("%d*%d=%d", a, b, a * b);
		break;
	case'/':
		if (b == 0) {
			break;
		}
		else {
			printf("%d/%d=%d", a, b, a / b);
		}
		break;
	case'%':
		printf("%d", a);
		printf("%c",c);
		printf("%d=%d", b, a % b);
		break;
	}
	return 0;
}