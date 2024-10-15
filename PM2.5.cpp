#include <stdio.h>
int main() {
	int n, i;
	int yiji = 0, erji = 0, sanji = 0, siji = 0, wuji = 0, liuji = 0;
	double sum = 0;
	int numbers[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	printf("%.2f\n", sum / n);
	for (i = 0; i < n; i++) {
		if (numbers[i] >= 0 && numbers[i] <= 50) {
			yiji++;
		}
		else if (numbers[i] <= 100) {
			erji++;
		}
		else if (numbers[i] <= 150) {
			sanji++;
		}
		else if (numbers[i] <= 200) {
			siji++;
		}
		else if (numbers[i] <= 300) {
			wuji++;
		}
		else {
			liuji++;
		}
	}
	printf("%d %d %d %d %d %d", yiji, erji, sanji, siji, wuji, liuji);
	return 0;
}