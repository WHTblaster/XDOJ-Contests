#include<stdio.h>
int main() {
	int n, i;
	scanf("%d", &n);
	double sum = 0;
	int arr[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%.2f", sum * 1.0 / n);
}