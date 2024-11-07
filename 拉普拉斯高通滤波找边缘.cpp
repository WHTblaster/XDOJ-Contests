#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int brr[1000];
	for (int j = 0; j < n - 2; j++) {
		brr[j] = arr[j] + (-2) * arr[j + 1] + arr[j + 2];
		printf("%d ", brr[j]);
	}
	return 0;
}