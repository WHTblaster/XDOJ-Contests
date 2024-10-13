#include<stdio.h>
#include<math.h>
double jisuan(int n, double x);
int main() {
	int N;
	double X;
	double ans;
	scanf("%d%lf", &N, &X);
	ans = jisuan(N, X);
	printf("%.4f", ans);
	return 0;
}
double jisuan(int n, double x) {
	double sinx = x;
	for (int i = 1; i < n; i++) {
		long jiecheng = 1 ;
		for (int j = 1; j <2*i+2; ++j) {
			jiecheng = jiecheng * j;
		}
		double p = 2 * (double)i + 1;
		double term=pow(-1,(double)i) * pow(x, p) / jiecheng;
		sinx += term;
	}
	return sinx;
}