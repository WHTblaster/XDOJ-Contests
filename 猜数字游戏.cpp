#include<stdio.h>
int main() {
	int ans, n, num = 0, t = 0;
	scanf("%d %d", &ans, &n);
	while (1) {
		t++;
		if (t > n) {
			printf("Game Over\n");
			break;
		}
		scanf("%d", &num);
		if (num < 0) {
			printf("Game Over\n");
			break;
		}
		else if (num == ans) {
			if (t == 1) {
				printf("Bingo!\n");
				break;
			}
			else if (t <= 3) {
				printf("Lucky You!\n");
				break;
			}
			else {
				printf("Good Guess!\n");
				break;
			}
		}
		else if (num < ans) {
			printf("Too small\n");
		}
		else {
			printf("Too big\n");
		}
	}
	return 0;
}