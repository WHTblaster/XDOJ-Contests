#include <stdio.h>
int main() {
	int arr[10000];
	int term = 0;
	int i;
	for (i = 0; i < 10000; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			term = i;
			break;
		}
	}
	int n = 2;
	int score = arr[0];
	for (int j = 1; j < term; j++) {
			if (arr[j] == 2 && arr[j - 1] == 2) {
				score += 2 * n;
				n++;
			}
			else {
				score += arr[j];
				n = 2;
			}
	}
	printf("%d", score);
	return 0;
}