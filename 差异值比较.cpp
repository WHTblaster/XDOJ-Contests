#include<stdio.h>
#include <corecrt_malloc.h>
int main() {
	int n;
	scanf("%d\n", &n);
	double arr[10];
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
	}
	double* arr2 = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n - 1; i++) {
		arr2[i] = arr[i + 1] - arr[i];
	}
	double min = arr2[0], max = arr2[0];
	for (int i = 1; i < n - 1; i++) {
		if (arr2[i] < min) {
			min = arr2[i];
		}
		if (arr2[i] > max) {
			max = arr2[i];
		}
	}
	printf("%.2f %.2f", max, min);
	return 0;
}