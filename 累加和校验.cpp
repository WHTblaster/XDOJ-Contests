#include<stdio.h>
#include<string.h>
unsigned int jisuan(const char* str) {
	unsigned int sum = 0;
	for (int i = 0; i < strlen(str); i++) {
		sum += (unsigned int)str[i];
	}
	return sum;
}
int main() {
	char str[100];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str,"\n")] = 0;
	unsigned int sum = jisuan(str);
	unsigned char last = sum & 0xFF;
	printf("%u", last);
	return 0;
}