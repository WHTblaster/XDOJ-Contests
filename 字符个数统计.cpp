#include<stdio.h>
#include<ctype.h>
int c1 = 0, c2 = 0, c3 = 0;
int main() {
	char ch;
	while ((ch = getchar()) != '!') {
		if (ch >= 65 && ch <= 91) {
			c1++;
		}
		else if (ch >= 97 && ch <= 123) {
			c2++;
		}
		else if (ch >= 48 && ch <= 57) {
			c3++;
		}
	}
	printf("%d %d %d", c1, c2, c3);
	return 0;
}