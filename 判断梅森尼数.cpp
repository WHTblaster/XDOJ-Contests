#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool sushu(int num) {
	if (num == 1) {
		return false;
	}
	for (int i = 2; i * i < num; i++) {
		if (num % i == 0)return false;
	}
	return true;
}
int main() {
	int n;
	scanf("%d", &n);
	if (sushu((int)(pow(2, (double)n)) - 1)) {
		printf("%d 1", (int)(pow(2, (double)n) - 1));
	}
	else {
		printf("%d 0", (int)(pow(2, (double)n) - 1));
	}
	return 0;
}