#include <stdio.h>
int jisuan(int num);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (jisuan(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
int jisuan(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum == num;
}