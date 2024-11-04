#include<stdio.h>
void fenlei(int n) {
	if (n == 0) {
		printf("%d Terrible\n", n);
	}
	else if (n < 60) {
		printf("%d Fail\n", n);
	}
	else if (n < 80) {
		printf("%d Pass\n", n);
	}
	else if (n < 100) {
		printf("%d Good\n", n);
	}
	else {
		printf("%d Excellent\n", n);
	}
}
int main() {
	int a, b, c, d, e;
	scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
	fenlei(a);
	fenlei(b);
	fenlei(c);
	fenlei(d);
	fenlei(e);
	return 0;
}