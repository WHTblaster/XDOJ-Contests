#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b * b - 4 * a * c < 0) {
		printf("no");
	}
	else {
		double s = sqrt(b * b - 4 * a * c);
		if (s == 0) {
			printf("%.1f", -b * 1.0 / (2 * a));
		}
		else {
			printf("%.1f %.1f", (-b + s) * 1.0 / (2 * a), (-b - s) * 1.0 / (2 * a));
		}
	}
	return 0;
}