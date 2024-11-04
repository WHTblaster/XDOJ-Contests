#include<stdio.h>
#include<math.h>
int main() {
	double n;
	scanf("%le", &n);
	double term = 1.0, sum = 0.0;
	int m = 1;
	double den = 1.0;
	while (fabs(term) >= n) {
		sum += term;
		m++;
		den += 2.0;
		term = (m % 2 == 1) ? 1.0 / den : -1.0 / den;
	}
	sum += term;
	printf("%.6f %.8f", 4 * sum, term);
	return 0;
}