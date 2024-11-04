#include<stdio.h>
#include<string.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	char str[100];
	scanf("%s", str);
	printf("%.*s", b - a + 1, str + a - 1);
	return 0;
}