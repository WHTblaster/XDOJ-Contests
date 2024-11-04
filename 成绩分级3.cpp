#include <stdio.h>
int main() {
	double m;
	scanf("%lf", &m);
	printf("%.2f ", m);
	if (m < 60) {
		printf("E");
	}
	else if (m < 70) {
		printf("D");
	}
	else if (m < 80) {
		printf("C");
	}
	else if (m < 90) {
		printf("B");
	}
	else {
		printf("A");
	}
	return 0;
}