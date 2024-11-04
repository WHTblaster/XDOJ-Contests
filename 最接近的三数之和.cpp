#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int bijiao(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int main() {
	int n, t, i, j, k, c = INT_MAX;
	scanf("%d", &n);
	int* num = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &t);
	qsort(num, n, sizeof(int), bijiao);
	for (int i = 0; i <= n - 3; i++) {
		j = i + 1;
		k = n - 1;
		while (j < k) {
			int sum = num[i] + num[j] + num[k];
			if (abs(sum - t) < abs(c - t)) {
				c = sum;
			}
			if (sum < t) {
				j++;
			}
			else {
				k--;
			}
		}
		
	}
	printf("%d", c);
	free(num);
	return 0;
}