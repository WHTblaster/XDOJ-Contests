#include<stdio.h>
int main() {
	long n;
	scanf("%ld", &n);
	if (n % 2 == 0) {
		printf("%ld", n);
	}
	else {
		n = 3 * n + 1;
		printf("%ld", n);
	}
	return 0;
}