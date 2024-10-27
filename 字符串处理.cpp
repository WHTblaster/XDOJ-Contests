#include<stdio.h>
#include<string.h>
#include<ctype.h>
int panduan(char c) {
	return(isdigit(c) || (c >= 'a' && c <= 'f') || c >= 'A' && c <= 'F');
}
int zhuanhuan(char c) {
	if (isdigit(c)) {
		return c - '0';
	}
	else if (c >= 'a' && c <= 'f') {
		return c - 'a' + 10;
	}
	else if (c >= 'A' && c <= 'F') {
		return c - 'A' + 10;
	}
	return 0;
}
int main() {
	char str[50];
	int sum = 0, hex = 0;
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (panduan(str[i])) {
			hex = 1;
			sum += zhuanhuan(str[i]);
		}
	}
	if (hex) {
		printf("%d", sum);
	}
	else {
		printf("NO");
	}
	return 0;
}