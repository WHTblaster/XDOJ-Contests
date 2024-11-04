#include<stdio.h>()
int main(){
	int M;
	scanf("%d", &M);
	printf("%d ", M);
	int arr[7];
	int i = 0, sum = 0;
	while (M > 0) {
		arr[i] = M % 10;
		sum += arr[i];
		M /= 10;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%d ", arr[j]);
	}
	printf("%d", sum);
	return 0;
}