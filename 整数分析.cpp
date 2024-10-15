#include<stdio.h>
int main (){
	int n, dig, min, max;
	int count = 0;
	scanf("%d", &n);
	if(n==0){
		count = 1;
		max =  0;
		min = 0;
		}
		else
		{
	while (n!=0){
		dig = n % 10;
		if(count == 0){
		max = dig ;
		min = dig ;
		}
		if(dig>=max){
			max = dig;
			}
			if(dig<=min){
				min = dig;
				}
		n /= 10;
		count++;
	     	}
		}
		printf("%d %d %d", count, max, min);
		return 0;
	}