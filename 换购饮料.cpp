#include<stdio.h>
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int sum = n;
	while (n >= k) {
		sum += n / k;
		n = n - n / k * k + n / k;
	}
	printf("%d", sum);
	return 0;
}