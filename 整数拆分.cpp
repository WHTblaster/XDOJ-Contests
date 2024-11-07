#include<stdio.h>
#include<math.h>
long long max(int n) {
	if (n == 2)return 1;
	if (n == 3)return 2;
	long long san = 0;
	long long er = 0;
	if (n % 2 == 0) {
		san = n / 6 * 2;
		er = n % 6 / 2;
	}
	else {
		san = (n - 3) / 6 * 2 + 1;
		er = (n - 3) % 6 / 2;
	}
	return pow(3, san) * pow(2, er);
}
int main() {
	int n;
	scanf("%d", &n);
	long long ans = max(n);
	printf("%lld", ans);
	return 0;
}