#include <stdio.h>
int main() {
	int a;
	int c = 0;
	int part = 1;
	scanf("%d\n", &a);
	for (int b = 1; b < a + 1; b++) {
		int n;
		scanf("%d", &n);
		if (b == 1 && n == 0) {
			part++;
		}
		else {
			if (c != n) {
				part++;
				c = n;
			}
			else {
				c = n;
			}
		}
	}
	printf("%d", part-1);
	return 0;
}