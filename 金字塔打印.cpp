#include<stdio.h>
void dayin(int m, int n, char c) {
	for (int i = n; i < m; i++) {
		printf(" ");
	}
	for (int i = n; i > 0; i--) {
		if (i == 1) {
			printf("%c\n", c);
		}
		else {
			printf("%c ", c);
		}
	}
}
int main() {
	int m;
	char c;
	scanf("%d %c", &m, &c);
	for (int i = 1; i <= m; i++) {
		dayin(m, i, c);
	}
	return 0;
}
