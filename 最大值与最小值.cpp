#include<stdio.h>
int main() {
	int arr[4];
	int a, b;
	scanf("%d %d", &a, &b);
	arr[0] = (a + b) * (a + b);
	arr[1] = (a - b) * (a - b);
	arr[2] = a * a + b * b;
	arr[3] = a * a - b * b;
	int min = arr[0], max = arr[0];
	for (int i = 0; i < 4; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d %d", max, min);
	return 0;
}