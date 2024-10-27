#include <stdio.h>
int main() {
	int Day;
	int AQI;
	int num;
	scanf("%d %d %d", &num, &AQI, &Day);
	if (num < 0 || num>999999 || AQI < 0 || AQI>600 || Day < 1 || Day>7) {
		printf("input error");
	}
	else {
		int n = num % 10;
		switch (Day) {
		case 1:
			if (AQI >= 200) {
				if (AQI >= 400) {
					if (n % 2 != 0) {
						printf("No");
					}
					else {
						printf("Yes");
					}
				}
				else if (n == 1 || n == 6) {
					printf("No");
				}
				else {
					printf("Yes");
				}
			}
			else {
				printf("Yes");
			}
			break;
		case 2:
			if (AQI >= 200) {
				if (AQI >= 400) {
					if (n % 2 == 0) {
						printf("No");
					}
					else {
						printf("Yes");
					}
				}
				else if (n == 2 || n == 7) {
					printf("No");
				}
				else {
					printf("Yes");
				}
			}
			else {
				printf("Yes");
			}
			break;
		case 3:
			if (AQI >= 200) {
				if (AQI >= 400) {
					if (n % 2 != 0) {
						printf("No");
					}
					else {
						printf("Yes");
					}
				}
				else if (n == 3 || n == 8) {
					printf("No");
				}
				else {
					printf("Yes");
				}
			}
			else {
				printf("Yes");
			}
			break;
		case 4:
			if (AQI >= 200) {
				if (AQI >= 400) {
					if (n % 2 == 0) {
						printf("No");
					}
					else {
						printf("Yes");
					}
				}
				else if (n == 4 || n == 9) {
					printf("No");
				}
				else {
					printf("Yes");
				}
			}
			else {
				printf("Yes");
			}
			break;
		case 5:
			if (AQI >= 200) {
				if (AQI >= 400) {
					if (n % 2 != 0) {
						printf("No");
					}
					else {
						printf("Yes");
					}
				}
				else if (n == 5 || n == 0) {
					printf("No");
				}
				else {
					printf("Yes");
				}
			}
			else {
				printf("Yes");
			}
			break;
		case 6:
			printf("Yes");
			break;
		case 7:
			printf("Yes");
			break;
		}
	}
	return 0;
}