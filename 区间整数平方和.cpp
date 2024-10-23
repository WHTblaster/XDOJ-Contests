#include<stdio.h>
int main() {
	int m, n, sum = 0;
	scanf("%d %d", &m, &n);
	if (m > n) {
		for (int i = n; i <= m; i++) {
			sum += i * i;
		}
		printf("%d", sum);
	}
	else if (m < n) {
		for (int i = m; i <= n; i++) {
			sum += i * i;
		}
		printf("%d", sum);
	}
	else {
		printf("%d", m * m);
	}
	return 0;
}