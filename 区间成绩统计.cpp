#include<stdio.h>
int main() {
	int n, a, b, count = 0;
	int arr[100];
	scanf("%d %d %d", &n, &a, &b);
	if (a > b) {
		int term = a;
		a = b;
		b = term;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= a && arr[i] <= b) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}