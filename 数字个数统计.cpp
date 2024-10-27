#include<stdio.h>
int c1 = 0, c2 = 0, c3 = 0;
int tongji(int n) {
	if (n % 2 != 0) {
		c1++;
	}
	if (n % 2 == 0) {
		c2++;
	}
	if (n % 4 == 0 && n % 3 != 0) {
		c3++;
	}
	return(c1, c2, c3);
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i <= n * n; i++) {
		tongji(i);
	}
		printf("%d %d %d\n", c1, c2, c3);
	int arr[3] = { c1 + c2,c1 + c3,c2 + c3 };
	int max = arr[0];
	for (int i = 1; i < 3; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}

	}
	printf("%d", max);
	return 0;
}