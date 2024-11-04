#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double d = b * b - 4 * a * c;
	double d2 = sqrt(d);
	if (d < 0 || (c != 0 && a == 0 && b == 0)) {
		printf("No real root");
	}
	else if (d == 0) {
		printf("%.2f", -b / (2 * a));
	}
	else {
		printf("%.2f %.2f", (-b + d2) / (2 * a), (-b - d2) / (2 * a));
	}
	return 0;
}