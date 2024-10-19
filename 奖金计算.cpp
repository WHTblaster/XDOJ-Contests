#include<stdio.h>
int main() {
	int n, w;
	scanf("%d", &n);
	if (n <= 100000) {
		w = n / 10;
	}
	else if (n <= 200000) {
		w = 10000 + ((double)n - 100000) * 0.075;
	}
	else if (n <= 400000) {
		w = 17500 + ((double)n - 200000) * 0.05;
	}
	else if (n <= 600000) {
		w = 27500 + ((double)n - 400000) * 0.03;
	}
	else if (n <= 1000000) {
		w = 33500 + ((double)n - 600000) * 0.015;
	}
	else {
		w = 39500 + ((double)n - 1000000) * 0.01;
	}
	printf("%d", (int)w);
	return 0;
}