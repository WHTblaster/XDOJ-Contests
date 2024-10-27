#include<stdio.h>
int c1 = 0, c2 = 0, c3 = 0;
int panduan(int ak, int m) {
	if (ak % m == 0) {
		c1++;
	}
	if (ak % m == 1) {
		c2++;
	}
	if (ak % m > 1) {
		c3++;
	}
	return(c1, c2, c3);
}
int main() {
	int m, k;
	scanf("%d %d", &m, &k);
	for (int i = 1; i <= k; i++) {
		int ak;
		if (i == 1) {
			ak = 2;
			panduan(ak, m);
		}
		else if (i == 2) {
			ak = 3;
			panduan(ak, m);
		}
		else {
			ak = (i - 1) * (i - 1) + 3 * i - 5;
			panduan(ak, m);
		}
	}
	printf("%d %d %d", c1, c2, c3);
	return 0;
}