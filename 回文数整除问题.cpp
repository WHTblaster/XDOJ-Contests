#include<stdio.h>
int huiwen(int num) {
	int o = num, r = 0;
	while (num > 0) {
		r = r * 10 + num % 10;
		num /= 10;
	}
	return o == r;
}
int main() {
	int n, count = 0;
	scanf("%d", &n);
	printf("%d ", n);
	for (int i = 10000; i <= 99999; i++) {
		if (huiwen(i) && i % n == 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}