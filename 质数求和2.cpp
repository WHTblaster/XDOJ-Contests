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
	int a, b, count = 1, Num = 2, sum = 0;
	scanf("%d %d", &a, &b);
	if (a >= 200 || b >= 200) {
		return 1;
	}
	if (a < b) {
		while (count <= b) {
			if (jisuan(Num)) {
				if (count >= a) {
					sum += Num;
				}
				count++;
			}
			Num++;
		}
	}
	if (a > b) {
		while (count <= a) {
			if (jisuan(Num)) {
				if (count >= b) {
					sum += Num;
				}
				count++;
			}
			Num++;
		}
	}
	printf("%d", sum);
	return 0;
}
