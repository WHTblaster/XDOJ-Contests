#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, i;
	int numbers[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}
	int max = 0, delta = 0;
	int y = numbers[0];
	for (i = 0; i < n; i++) {
		delta = numbers[i] - y;
		if (delta > max) {
			max = delta;
		}
		else if (0 - delta > max) {
			max = 0 - delta;
		}
		else { ; }
		y = numbers[i];
	}
	printf("%d", max);
	return 0;
}