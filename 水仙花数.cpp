#include<stdio.h>
#include<stdbool.h>
bool panduan(int num) {
	int arr[3];
	int term = num;
	for (int i = 0; i < 3; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	if (term == arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1] + arr[2] * arr[2] * arr[2]) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int a;
	scanf("%d", &a);
	if (a < 100 || a>999) {
		printf("-1");
	}
	else {
		if (panduan(a)) {
			printf("YES");
		}
		else {
			printf("NO");
		}
	}
	return 0;
}