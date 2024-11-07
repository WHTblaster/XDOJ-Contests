#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int yueshu(int n) {
	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i;
			if (i != n / i) {
				sum += n / i;
			}
		}
	}
	return sum;
}
bool zhenyueshu(int a, int b, int* sumA, int* sumB) {
	*sumA = yueshu(a);
	*sumB = yueshu(b);
	if (*sumA == b && *sumB == a) {
		return true;
	}
	else {
		return false;
	}
}
int shuchu(int n) {
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m > n) {
		int term = m;
		m = n;
		n = term;
	}if (m == 1) {
		m++;
	}
	for (int i = m; i <= n; i++) {
		for (int j = m; j < i; j++) {
			int sumA, sumB;
			if (zhenyueshu(j, i, &sumA, &sumB)) {
				printf("%d %d,%d %d\n", j, shuchu(j), i, shuchu(i));
			}
		}
	}
	return 0;
}