#include<stdio.h>
int main() {
	int n;
	float sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += 1 + 1 / (float)i * 1.0;
	}
	printf("%.1f", sum);
	return 0;
}