#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (x < 1) {
		;
	}
	else if (x < 10) {
		x = 2 * x - 1;
	}
	else {
		x = 3 * x - 11;
	}
	printf("%d", x);
	return 0;
}