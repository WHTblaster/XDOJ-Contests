#include <stdio.h>
void jisuan(int n);
int main() {
	int num;
	scanf("%d", &num);
	jisuan(num);
	return 0;
}
void jisuan(int n) {
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			printf("%d", i);
			n /= i;
			if (n > 1) {
				printf("*");
			}
		}
	}
	if (n > 1) {
		printf("%d",n);
	}
}