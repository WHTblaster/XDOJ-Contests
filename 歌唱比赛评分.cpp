#include<stdio.h>
int main() {
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	int arr[20];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	int max = arr[0], min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] >= max) {
			max = arr[i];
		}
		if (arr[i] <= min) {
			min = arr[i];
		}
	}
	if (arr[m - 1] == max) {
		sum -= min;
		printf("%.2f", (float)sum * 1.0 / (float)(n - 1));
	}else if (arr[m - 1] == min) {
		sum -= max;
		printf("%.2f", (float)sum * 1.0 / (float)(n - 1));
	}
	else {
		sum -= (max + min);
		printf("%.2f", (float)sum * 1.0 / (float)(n - 2));
	}
	return 0;
}