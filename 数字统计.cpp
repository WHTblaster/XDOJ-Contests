#include<stdio.h>
int c1 = 0, c2 = 0;
int panduan(int y) {
	if (y % 3 == 0) {
		c1++;
	}
	if (y % 5 < 3) {
		c2++;
	}
	return(c1, c2);
}
int main() {
	int x1, x2;
	scanf("%d %d", &x1, &x2);
	int y1 = x1 * x1 - 2 * x1 - 3, y2 = 5 * x2 + 2 - x2 * x2;
	if (y1 > y2) {
		int term = y1;
		y1 = y2;
		y2 = term;
	}
	for (int i = y1; i <= y2; i++) {
		panduan(i);
	}
	printf("%d %d", c1, c2);
	return 0;
}