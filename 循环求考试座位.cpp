#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int c = 2 * ((n - 100003) / 11 + 1) - 1;
	int r = (n - 100003) % 11 + 1;
	printf("%d %d", r, c);
	return 0;
}