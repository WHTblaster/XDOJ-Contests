#include<stdio.h>
int main() {
	float n, w = 0;
	scanf("%f", &n);
	if (n <= 100000) {
		printf("%.1f", n * 0.1);
	}
	else if (n <= 200000) {
		w = 10000 + (n - 100000) * 0.075;
		printf("%.1f", w);
	}
	else if (n <= 400000) {
		w = 17500 + (n - 200000) * 0.05;
		printf("%.1f", w);
	}
	else if (n <= 800000) {
		w = 27500 + (n - 400000) * 0.03;
		printf("%.1f", w);
	}
	else {
		w = 39500 + (n - 800000) * 0.01;
		printf("%.1f", w);
	}
	return 0;
}