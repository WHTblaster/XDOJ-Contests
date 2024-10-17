#include <stdio.h>
int main() {
	int n, i;
	double sum = 0;
	int num[100];
	int den[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			num[i] = i + 1;
		}
		else {
			num[i] = (i+1) * (-1);
		}
		den[i] = 2 * (i+1) - 1;
		sum += num[i] * 1.0 / den[i];
	}
	printf("%.3f", sum);
	return 0;
}