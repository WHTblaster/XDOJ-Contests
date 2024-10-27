#include<stdio.h>
#include<math.h>
int main() {
	int n;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += sin(1.0 / (double)i);
	}
	printf("%.2f", sum);
}