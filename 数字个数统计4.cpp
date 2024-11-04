#include<stdio.h>
int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
int tongji(int n) {
	if (n % 2 == 0) {
		c1++;
	}
	if (n % 2 != 0) {
		c2++;
	}
	if (n % 3 == 0) {
		c3++;
	}
	if (n % 7 != 0) {
		c4++;
	}
	return(c1, c2, c3, c4);
}
int main() {
	int m, sum = 0;
	scanf("%d", &m);
	int arr[10];
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
		tongji(arr[i]);
		sum += arr[i];
	}
	printf("%d %d %d %d %.2f", c1, c2, c3, c4, (double)sum * 1.0 / m);
	return 0;
}