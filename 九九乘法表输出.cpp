#include<stdio.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (i == n) {
				printf("%d*%d=%d", n, i, i * n);
			}
			else {
				printf("%d*%d=%d  ", n, i, i * n);
			}
		}
	}
	if (m == 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				if (j == i) {
					printf("%d*%d=%d\n", i, j, i * j);
				}
				else {
					printf("%d*%d=%d  ", i, j, i * j);
				}
			}
		}
	}
	return 0;
}