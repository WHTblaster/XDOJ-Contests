#include<stdio.h>
int main() {
	int m, i = 0;
	scanf("%d", &m);
	int arr[7];
	while (m > 0) {
		arr[i] = m % 10;
		if (arr[i] == 0) {
			i--;
		}
		m /= 10;
		i++;
	}
	for (int j = 0; j < i; j++) {
		printf("%d ", arr[j]);
	}
	return 0;
}