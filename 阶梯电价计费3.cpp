#include <stdio.h>
int main() {
	double a, charge;
	scanf("%lf", &a);
	if (a <= 110) {
		charge = a * 0.5;
		if ((int)(charge * 1000) % 10 > 4) {
			charge += 0.01;
		}
		printf("%.2f A 0.00", charge);
	}
	else if (a <= 210) {
		double b = a - 110;
		charge = 55 + 0.55 * b;
		if ((int)(charge * 1000) % 10 > 4) {
			charge += 0.01;
		}
		printf("%.2f B %.2f", charge, b);
	}
	else if (a <= 400) {
		double b = a - 210;
		charge = 110 + 0.7 * b;
		if ((int)(charge * 1000) % 10 > 4) {
			charge += 0.01;
		}
		printf("%.2f C %.2f", charge, b);
	}
	else {
		double b = a - 400;
		charge = 243 + 1.0 * b;
		if ((int)(charge * 1000) % 10 > 4) {
			charge += 0.01;
		}
		printf("%.2f D %.2f", charge, b);
	}
	return 0;
}