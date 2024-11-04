#include<stdio.h>
int main() {
	int m, n, mul = 1, div1 = 1, div2 = 1;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++) {
		mul *= i;
	}
	for (int j = 1; j <= n; j++) {
		div1 *= j;
	}
	for (int k = 1; k <= m - n; k++) {
		div2 *= k;
	}
	printf("%d", mul / div1 / div2);
	return 0;
}