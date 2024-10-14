#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int b = 0;
	for (n; n != 1; b++) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}
	}
	printf("%d", b);
	return  0;
}