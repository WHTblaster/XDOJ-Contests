#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, i;
	long long max = LLONG_MIN, cur = 0;
	scanf("%d", &n);
	long long* num = (long long*)malloc(n * sizeof(long long));
	for (i = 0; i < n; i++) {
		scanf("%lld", &num[i]);
	}
	for (i = 0; i < n; i++) {
		cur += num[i];
		if (cur > max) {
			max = cur;
		}
		if (cur < 0) {
			cur = 0;
		}
	}
	printf("%d", max);
	free(num);
	return 0;
}