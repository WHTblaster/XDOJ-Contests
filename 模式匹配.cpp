#include<stdio.h>
int main() {
	int arr[30];
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}
	int count = 0;
	for (int i = 0; i < n - 2; i++) {
		if (arr[i] == 3 && arr[i + 1] == 5 && arr[i + 2] == 7) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}