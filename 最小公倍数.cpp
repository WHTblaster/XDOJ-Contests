#include<stdio.h>
int main() {
	int a, b, mul = 1;
	scanf("%d %d", &a, &b);
	if (a % b == 0) {
		printf("%d", a);
	}
	if (b % a == 0) {
		printf("%d", b);
	}
	if (a % b != 0 && b % a != 0) {
		for (int i = 1; i <= a && i <= b; i++) {
			if (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				mul *= i;
			}
			else if (i == a || i == b) {
				mul *= a * b;
			}
		}
		printf("%d", mul);
	}
	return 0;
}