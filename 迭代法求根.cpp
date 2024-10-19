#include<stdio.h>
#include<math.h>
int main()
{
	double a, n;
	scanf("%lf", &a);
	n = a;
	while (fabs(n * n - a) > 0.00001)
	{
		n = (n + a / n) / 2.0;
	}
	printf("%.5f", (n + a / n) / 2.0);
}