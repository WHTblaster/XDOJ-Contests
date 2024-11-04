#include<stdio.h>
#include<limits.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	if (n == 0) {
		printf("0 0");
		return 0;
	}
	int max = 0, min = 9;
	while (n > 0) {
		int dig = n % 10;
		if (dig > max) {
			max = dig;
		}
		if (dig < min) {
			min = dig;
		}
		n /= 10;
	}
	printf("%d %d", max, min);
	return 0;
}