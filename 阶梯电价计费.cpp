#include <stdio.h>
int main() {
	double a, charge;
	scanf("%lf", &a);
	if (a <= 110) {
		printf("%.2f", a *0.5);
	}
	else if (a <= 210) {
		double b = a - 110;
		charge = 55 + 0.55 * b;
		printf("%.2f", charge);
	}
	else {
		double b = a - 210;
		charge = 110 + 0.7 * b;
		printf("%.2f", charge);
	}
	return 0;
}