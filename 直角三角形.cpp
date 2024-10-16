#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b <= c || (a + b > c && a * a + b * b != c * c)) {
		printf("no");
	}
	else {
		printf("%d", a * b);
	}
	return 0;
}