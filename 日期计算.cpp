#include <stdio.h>
int main() {
	int y, d;
	scanf("%d %d", &y, &d);
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
		if (d <= 31) {
			printf("1 %d", d);
		}
		else if (d <= 60) {
			printf("2 %d", d - 31);
		}
		else if (d <= 91) {
			printf("3 %d", d - 60);
		}
		else if (d <= 121) {
			printf("4 %d", d - 91);
		}
		else if (d <= 152) {
			printf("5 %d", d - 121);
		}
		else if (d <= 182) {
			printf("6 %d", d - 152);
		}
		else if (d <= 213) {
			printf("7 %d", d - 182);
		}
		else if (d <= 244) {
			printf("8 %d", d - 213);
		}
		else if (d <= 274) {
			printf("9 %d", d - 244);
		}
		else if (d <= 305) {
			printf("10 %d", d - 274);
		}
		else if (d <= 335) {
			printf("11 %d", d - 305);
		}
		else {
			printf("12 %d", d - 335);
		}
	}
	else {
		if (d <= 31) {
			printf("1 %d", d);
		}
		else if (d <= 59) {
			printf("2 %d", d - 31);
		}
		else if (d <= 90) {
			printf("3 %d", d - 59);
		}
		else if (d <= 120) {
			printf("4 %d", d - 90);
		}
		else if (d <= 151) {
			printf("5 %d", d - 120);
		}
		else if (d <= 181) {
			printf("6 %d", d - 151);
		}
		else if (d <= 212) {
			printf("7 %d", d - 181);
		}
		else if (d <= 243) {
			printf("8 %d", d - 212);
		}
		else if (d <= 273) {
			printf("9 %d", d - 243);
		}
		else if (d <= 304) {
			printf("10 %d", d - 273);
		}
		else if (d <= 334) {
			printf("11 %d", d - 304);
		}
		else {
			printf("12 %d", d - 334);
		}
	}
}