#include<stdio.h>
#include<stdbool.h>
bool jisuan(int num) {
	if (num <= 1)return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0)return false;
	}
	return true;
}
int main() {
	int n, count = 0, Num = 2, sum = 0;
	scanf("%d", &n);
	if (n >= 150) {
		return 1;
	}
	while (count < n + 10) {
		if (jisuan(Num)) {
			if (count >= n - 1) {
				sum += Num;
			}
			count++;
		}
		Num++;
	}
	printf("%d", sum);
	return 0;
}
