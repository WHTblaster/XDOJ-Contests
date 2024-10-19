#include<stdio.h>
int main() {
	long n;
	scanf("%ld", &n);
	if (n % 2 != 0) {
		printf("-1");
	}
	else {
		for (int i = 63; i >= 0; i--) {
			if (n & (1 << i)) {
				printf("%ld ", (1 << i));
				n -= (1 << i);
			}
		}
	}
	return 0;
}