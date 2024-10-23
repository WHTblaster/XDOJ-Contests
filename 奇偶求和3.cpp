#include<stdio.h>
int jisuan(int n) {
	int an = 3 * (n - 1) * (n - 1) + 2 * n - 1;
	return an;
}
int main() {
	int m, count1 = 0, count2 = 0;
	scanf("%d", &m);
	int arr1[20];
	for (int n = 1; n < 10000; n++) {
		if (m == 1) {
			break;
		}
		int an = jisuan(n);
		if (an > 100 && an % 2 != 0) {
			arr1[count1] = an;
			count1++;
			if (count1 == m - 1) {
				break;
			}
		}
	}
	int arr2[20];
	for (int n = 1; n < 10000; n++) {
		int an = jisuan(n);
		if (an > 100 && an % 2 == 0) {
			arr2[count2] = an;
			count2++;
			if (count2 == m) {
				break;
			}
		}
	}
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < count1; i++) {
		sum1 += arr1[i];
	}
	for (int i = 0; i < count2; i++) {
		sum2 += arr2[i];
	}
	printf("%d %d", sum2, sum1);
	return 0;
}