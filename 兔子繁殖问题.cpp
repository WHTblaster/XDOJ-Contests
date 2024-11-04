#include<stdio.h>
unsigned long long jisuan(int n) {
	if (n <= 0) {
		return 0;
	}
	else if (n == 1 || n == 2) {
		return 1;
	}
	else {
		unsigned long long a = 1, b = 1, c;
		for (int i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%llu", jisuan(n));
	return 0;
}