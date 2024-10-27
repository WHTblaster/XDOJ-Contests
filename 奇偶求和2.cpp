#include<stdio.h>
int main() {
	int n, sum1 = 0, sum2 = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i += 2) {
		sum1 += i;
	}
	for (int i = 2; i <= n; i += 2) {
		sum2 += i;
	}
	printf("%d %d", sum1, sum2);
	return 0;
}