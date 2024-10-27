#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		int a = n * n % 1000000 / 100000, b = n * n % 100000 / 10000, c = n * n % 10000 / 1000, d = n * n % 1000 / 100;
		if (a == 0 && b == 0 && c == 0 && d == 0) {
			printf("failure");
		}
		else {
			int num = a * 1000 + b * 100 + c * 10 + d;
			while (num < 1000) {
				num *= 10;
			}
			n = num;
		}
		printf("%d\n", n);
	}
	return 0;
}