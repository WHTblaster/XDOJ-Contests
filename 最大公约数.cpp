#include<stdio.h>
int jisuan(int a, int b);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",jisuan(a,b));
	return 0;
}
int jisuan(int a, int b) {
	while (b != 0) {
		int c = b;
		b = a % b;
		a = c;
	}
	return a;
}