#include<stdio.h>
void shuwei(int num) {
	int arr[10];
	int count = 0;
	while (num > 0) {
		arr[count++] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int num;
	scanf("%d", &num);
	shuwei(num);
	return 0;
}