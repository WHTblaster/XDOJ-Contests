#include<stdio.h>
int main() {
	int arr[21];
	int n;
	scanf("%d\n", &n);
	scanf("%d ", &arr[0]);
	int sum = arr[0];
	for (int i = 1; i < n; i++) {
		scanf("%d ", &arr[i]);
		sum += arr[i];
	}
	scanf("%d", &arr[n]);
	sum += arr[n];
	int max = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[1]) {
			max = i;
		}
	}
	if (arr[n] < arr[max]) {
		max = n;
	}
	printf("%d %d", sum, max);
	return 0;
}