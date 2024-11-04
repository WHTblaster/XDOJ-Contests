#include<stdio.h>()
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		int term = b;
		b = a;
		a = term;
	}
	int c;
	scanf("%d", &c);
	for (int i = b; i >= a; i--) {
		if (i % c == 0) {
			printf("[%d,%d] %d", a, b, i);
			break;
		}
	}
	return 0;
}