#include <stdio.h>
#include<math.h>
int main() {
	int n, i, a, s, l;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 0) {
			printf("%d\n", a);
		}
		else {
			s = a * a;
			l = s % (int)pow(10, (int)log10(a) + 1);
			if (l == a) {
				printf("%d\n", a);
			}
			else {
				printf("No\n");
			}
		}
	}
	return 0;
}