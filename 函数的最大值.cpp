#include<stdio.h>
int main() {
	double a, max = 0;
	scanf("%lf", &a);
	for (double x = 0; x <= 10; x += 0.0001) {
		if ((double)(-1) * x * x * x + a * x * x > max) {
			max = (double)(-1) * x * x * x + a * x * x;
		}
		else {
			;
		}
	}
	printf("%.2f", max);
	return 0;
}