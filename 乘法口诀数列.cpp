#include<stdio.h>
int n, count = 2;
int an[200];
void chazhi(int num) {
	if (num >= 10) {
		an[count] = num / 10;
		an[count + 1] = num % 10;
		count += 2;
	}
	else {
		an[count++] = num;
	}
}
int main() {
	scanf("%d %d %d", &an[0], &an[1], &n);
	int* ptr = an;
	while (count <= n) {
		chazhi((*ptr) * (*(ptr + 1)));
		ptr++;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", an[i]);
	}
	return 0;
}