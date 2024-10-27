#include<stdio.h>
#include<stdbool.h>
int main() {
	double num, sum = 0;
	int count = 0;
	double a = 0;
	bool shuru = true;
	while (shuru) {
		if (scanf("%lf", &num) == 1) {
			if (count == 0) {
				a = num;
			}
			sum += num;
			count++;
		}
		else {
			char c;
			scanf("%c", &c);
			if (c == '!') {
				shuru = false;
			}
			else {
				scanf("%lf", &num);
				sum += num;
				count++;
			}
		}
	}
	double s = (sum * 2.0 - a - num) / 2;
	printf("%.2f", s);
	return 0;
}