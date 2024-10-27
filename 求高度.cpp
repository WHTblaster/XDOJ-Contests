#include<stdio.h>
#include<math.h>
int panduan(double x, double y) {
	double jvli = pow(x, 2) + pow(y, 2);
	return jvli <= 1;
}
int main() {
	double x, y;
	if (scanf("%lf %lf", &x, &y) != 2) {
		printf("input error");
		return 0;
	}
	int yuan = panduan(x - 2, y - 2) || panduan(x + 2, y - 2) || panduan(x - 2, y + 2) || panduan(x + 2, y + 2);
	if (yuan) {
		printf("10");
	}
	else {
		printf("0");
	}
	return 0;
}