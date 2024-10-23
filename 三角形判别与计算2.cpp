#include<stdio.h>
#include<math.h>
bool panduan1(int a, int b, int c) {
	return(a + b > c) && (a + c > b) && (b + c > a);
}
bool panduan2(int a, int b, int c) {
	int sides[3] = { a,b,c };
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			for (int k = j + 1; k < 3; k++) {
				if (sides[i] * sides[i] + sides[j] * sides[j] == sides[k] * sides[k]|| sides[i] * sides[i] + sides[k] * sides[k] == sides[j] * sides[j]|| sides[k] * sides[k] + sides[j] * sides[j] == sides[i] * sides[i]) {
					return true;
				}
			}
		}
	}
	return false;
}
double jisuanS(int a, int b, int c) {
	double s = ((double)a + (double)b + (double)c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
double jisuanP(int a, int b, int c) {
	return ((double)a + (double)b + (double)c);
}
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (!panduan1(a, b, c)) {
		printf("不是三角形");
	}
	else if (panduan2(a, b, c)) {
		printf("%d", (int)jisuanS(a, b, c));
	}
	else {
		printf("其他三角形");
	}
	return 0;
}