#include<stdio.h>
int main() {
	int n, count = 1, max = 1;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) {
			count++;
		}
		else {
			if (count > max) {
				max = count;
			}
			count = 1;
		}
	}
	if (count > max) {
		max = count;
	}
	printf("%d", max);
	return 0;
}