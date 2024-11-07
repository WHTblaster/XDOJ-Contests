#include<stdio.h>
#include<ctype.h>
int main() {
	int n;
	char ch;
	int ji = 0, ou = 0;
	scanf("%d", &n);
	while ((ch = getchar()) != '!') {
		if (isalpha(ch)) {
			int m = ch % n;
			if (m % 2 == 0) {
				ou++;
			}
			else {
				ji++;
			}
		}
	}
	printf("%d %d", ji, ou);
	return 0;
}