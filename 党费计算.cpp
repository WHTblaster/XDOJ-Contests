#include<stdio.h>
int main() {
	float n;
	scanf("%f", &n);
	if (n <= 3000) {
		printf("%.1f", n * 0.005);
	}
	else if (n <= 5000) {
		printf("%.1f", n * 0.01);
	}
	else if (n <= 10000) {
		printf("%.1f", n * 0.015);
	}
	else {
		printf("%.1f", n * 0.02);
	}
	return 0;
}