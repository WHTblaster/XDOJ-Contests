#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[30];
	arr[0] = n * n - n + 1;
	printf("%d ", arr[0]);
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + 2;
		printf("%d ", arr[i]);
	}
	return 0;
}