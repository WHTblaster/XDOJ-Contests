#include<stdio.h>
int main() {
	int Y, M, D, h, m, s;
	scanf("%d\n%d\n%d\n%d\n%d\n%d", &Y, &M, &D, &h, &m, &s);
	if (s == 59) {
		m++;
		s = 0;
	}
	if (m == 60) {
		h++;
		m = 0;
	}
	if (h == 24) {
		D++;
		h = 0;
	}
	if ((M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) && D == 32) {
		M++;
		D = 1;
	}
	if ((M == 4 || M == 6 || M == 9 || M == 11) && D == 31) {
		M++;
		D = 1;
	}
	if ((Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0)) && M == 2 && D == 30) {
		M++;
		D = 1;
	}
	if ((Y % 4 != 0 || (Y % 100 == 0 && Y % 400 != 0)) && M == 2 && D == 29) {
		M++;
		D = 1;
	}
	if (M == 13) {
		Y++;
		M = 1;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d", Y, M, D, h, m, s);
	return 0;
}