#include<stdio.h>
int main() {
	double a, b, c, d, e, f;
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	double min = (b - a) * (b - a);
	if ((c - a) * (c - a) < min) {
		min = (c - a) * (c - a);
		double term = b;
		b = c;
		c = term;
	}
	if ((d - a) * (d - a) < min) {
		min = (d - a) * (d - a);
		double term = b;
		b = d;
		d = term;
	}
	if ((e - a) * (e - a) < min) {
		min = (e - a) * (e - a);
		double term = b;
		b = e;
		e = term;
	}
	if ((f - a) * (f - a) < min) {
		double term = b;
		b = f;
		f = term;
	}
	min = (c - b) * (c - b);
	if ((d - b) * (d - b) < min) {
		min = (d - b) * (d - b);
		double term = c;
		c = d;
		d = term;
	}
	if ((e - b) * (e - b) < min) {
		min = (e - b) * (e - b);
		double term = c;
		c = e;
		e = term;
	}
	if ((f - b) * (f - b) < min) {
		double term = c;
		c = f;
		f = term;
	}
	min = (d - c) * (d - c);
	if ((e - c) * (e - c) < min) {
		min = (e - c) * (e - c);
		double term = d;
		d = e;
		e = term;
	}
	if ((f - c) * (f - c) < min) {
		double term = d;
		d = f;
		f = term;
	}
	min = (e - d) * (e - d);
	if ((f - d) * (f - d) < min) {
		double term = e;
		e = f;
		f = term;
	}
	printf("%.2f %.2f %.2f %.2f %.2f %.2f", a, b, c, d, e, f);
	return 0;
}