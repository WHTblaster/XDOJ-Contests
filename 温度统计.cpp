#include<stdio.h>
int main() {
	float arr[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		float C;
		scanf("%f", &C);
		arr[i] = C * 9.0 / 5 + 32;
		printf("%.1f ", arr[i]);
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	float min = arr[0], max = arr[0], sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	printf("%.1f %.1f %.1f", min, max, sum / (double)n);
	return 0;
}