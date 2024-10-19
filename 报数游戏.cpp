#include<stdio.h>
#include<stdbool.h>
bool skip(int num) {
	if (num % 7 == 0) {
		return true;
	}
	while (num > 0) {
		if (num % 10 == 7) {
			return true;
		}
		num /= 10;
	}
	return false;
}
int main() {
	int n, a = 0, b = 0, c = 0, N = 1, count = 0;
	scanf("%d", &n);
	while (count < n) {
		if (skip(N)) {
			if ((N - 1) % 3 == 0) {
				a++;
			}
			else if ((N - 1) % 3 == 1) {
				b++;
			}
			else {
				c++;
			}
		}
		else {
			count++;
		}
		N++;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}