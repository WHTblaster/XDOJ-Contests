#include<stdio.h>
int main() {
	int i, n;
	int sum = 0;
	int arr[100];
	for (i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			n = i;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	printf("%d", sum);
	return 0;
}