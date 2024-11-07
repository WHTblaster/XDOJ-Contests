#include<stdio.h>
#include<limits.h>
int min(int a, int b, int c) {
	int MIN = a < b ? a : b;
	return MIN < c ? MIN : c;
}
int main() {
	int n;
	scanf("%d", &n);
	int pen[3][2];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &pen[i][0], &pen[i][1]);
	}
	int mincost = INT_MAX;
	for (int i = 0; i < 3; i++) {
		int num = pen[i][0];
		int jiage = pen[i][1];
		if (n % num == 0) {
			int cost = (n / num) * jiage;
			mincost = min(mincost, cost, INT_MAX);
		}
		else {
			int cost = ((n / num) + 1) * jiage;
			mincost = min(mincost, cost, INT_MAX);
		}
	}
	printf("%d",mincost);
	return 0;
}