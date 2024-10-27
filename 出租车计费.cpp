#include<stdio.h>
int main() {
	double a, cost = 0;
	int b;
	scanf("%lf %d", &a, &b);
	if (a <= 3) {
		cost = 10;
	}
	else if(a<=10){
		cost = 10 + (a - 3) * 2;
	}
	else {
		cost = 24 + (a - 10) * 3;
	}
	cost += (b / 5) * 2;
	printf("%.1f", cost);
	return 0;
}