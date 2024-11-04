#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ji = (4 * a - b) / 2, tu = (b - 2 * a) / 2;
	printf("%d %d", ji, tu);
	return 0;
}