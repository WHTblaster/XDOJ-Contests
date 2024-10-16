#include<stdio.h>
int main()
{
	int n, a, b, c, term;
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		a = i;
		c = n / 100 - 1 - i;
		term = (n - (a + c) * 100 - (a + c)) / 20;
		if ((a + c) * 101 + term * 20 != n) {
			c = n / 100 - i;
			b = (n - (a + c) * 100 - (a + c)) / 20;
			if (b >= 0 && b < 10 && c < 10)
			{
				printf("%d %d %d\n", a, b, c);
			}
		}
		else {
			b = term;
			if (b > 0 && b < 10 && c < 10)
			{
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}