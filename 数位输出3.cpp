#include<stdio.h>
int main() {
	int num, count = 0;
	scanf("%d", &num);
	if (num == 0)
		count = 1;
	while (num > 0) {
		num /= 10;
		count++;
	}
	printf("%d", count);
	return 0;
}