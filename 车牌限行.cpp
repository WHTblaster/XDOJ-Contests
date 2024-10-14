#include <stdio.h>
int main() {
	int Day;
	int AQI;
	int num;
	scanf("%d %d %d", &Day, &AQI, &num);
	int n = num % 10;
	switch (Day) {
	case 1:
		if (AQI >= 200) {
			if (AQI >= 400) {
				if (n % 2 != 0) {
					printf("%d yes", n);
				}
				else {
					printf("%d no", n);
				}
			}
			else if (n == 1 || n == 6) {
				printf("%d yes", n);
			}
			else {
				printf("%d no", n);
			}
		}
		else {
			printf("%d no", n);
		}
		break;
	case 2:
		if (AQI >= 200) {
			if (AQI >= 400) {
				if (n % 2 == 0) {
					printf("%d yes", n);
				}
				else {
					printf("%d no", n);
				}
			}
			else if (n == 2 || n == 7) {
				printf("%d yes", n);
			}
			else {
				printf("%d no", n);
			}
		}
		else {
			printf("%d no", n);
		}
		break;
	case 3:
		if (AQI >= 200) {
			if (AQI >= 400) {
				if (n % 2 != 0) {
					printf("%d yes", n);
				}
				else {
					printf("%d no", n);
				}
			}
			else if (n == 3 || n == 8) {
				printf("%d yes", n);
			}
			else {
				printf("%d no", n);
			}
		}
		else {
			printf("%d no", n);
		}
		break;
	case 4:
		if (AQI >= 200) {
			if (AQI >= 400) {
				if (n % 2 == 0) {
					printf("%d yes", n);
				}
				else {
					printf("%d no", n);
				}
			}
			else if (n == 4 || n == 9) {
				printf("%d yes", n);
			}
			else {
				printf("%d no", n);
			}
		}
		else {
			printf("%d no", n);
		}
		break;
	case 5:
		if (AQI >= 200) {
			if (AQI >= 400) {
				if (n % 2 != 0) {
					printf("%d yes", n);
				}
				else {
					printf("%d no", n);
				}
			}
			else if (n == 5 || n == 0) {
				printf("%d yes", n);
			}
			else {
				printf("%d no", n);
			}
		}
		else {
			printf("%d no", n);
		}
		break;
	case 6:
		printf("%d no", n);
		break;
	case 7:
		printf("%d no", n);
		break;
	}
	return 0;
}