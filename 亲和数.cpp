#include<stdio.h>
int jisuan1(int a);
int jisuan2(int b);
int main() {
	int n, m, N = 0, M = 0;
	int countm = 0, countn = 0;
	scanf("%d %d", &n, &m);
	countn = jisuan1(n);
	countm = jisuan1(m);
	N = jisuan2(n);
	M = jisuan2(m);
	if (N == m && M == n) {
		printf("yes ");
	}
	else {
		printf("no ");
	}
	printf("%d %d", countn, countm);
	return 0;
}
int jisuan1(int a) {
	int count = 0;
	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0) {
			count++;
		}
	}
	return count;
}
int jisuan2(int b) {
	int sum = 0;
	for (int i = 1; i <= b / 2; i++) {
		if (b % i == 0) {
			sum += i;
		}
	}
	return sum;
}