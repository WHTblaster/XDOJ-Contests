#include<stdio.h>
int main() {
	int n, c1 = 0, c2 = 0, c3 = 0;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 0) {
			c1++;
		}
		if (arr[i] > 0) {
			c2++;
		}
		if (arr[i] == 0) {
			c3++;
		}
	}
	printf("%d %d %d", c1, c2, c3);
	return 0;
}