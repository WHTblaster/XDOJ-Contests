#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	if (n > 1 && n <= 100000) {
		for (int i = 2; i <= n; i++) {
			int b = 1;
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					b = 0;
					break;
				}
			}
			if (b) {
				sum += i;
			}
		}
		printf("%d", sum);
	}
	else {
		printf("0");
	}
	return 0;
}