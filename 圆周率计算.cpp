#include<stdio.h>
#include<math.h>
int main() {
	int n;
	double s = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n - 1; i++) {
		s += pow(-1, i) / (2.0 * i + 1);
	}
	double pi = s * 4;
	printf("%.6f", pi);
	return 0;
}