#include<stdio.h>
#include<stdbool.h>
bool panduan(int num);
void jisuan(int n);
int main() {
	int n;
	scanf("%d", &n);
	jisuan(n);
	return 0;
}
bool panduan(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
void jisuan(int n) {
	int min = -1, max = -1;
	for (int i = 2; i <= n / 2; i++) {
		if (panduan(i) && panduan(n - i)) {
			if (min == -1) {
				min = i;
			}
			max = i;
		}
	}
		if (min != -1 && max != -1) {
			printf("%d %d", min, n-min);
		}
		else {
			;
		}
}