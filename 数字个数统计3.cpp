#include<stdio.h>
int main() {
	int a, b, count = 0;
	scanf("%d %d", &a, &b);
	if (a > b) {
		int term = a;
		a = b;
		b = term;
	}
	for (int i = a; i <= b; i++) {
		if (i % 7 == 0 || i % 11 == 0) {
			count++;
		}
		if (i % 7 == 0 && i % 11 == 0) {
			count--;
		}
	}
	printf("%d", count);
	return 0;
}