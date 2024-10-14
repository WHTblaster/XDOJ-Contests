#include <stdio.h>
int jisuan(int n, int ans = 0) {
	while (n > 0) {
		ans += n % 10;
		n /= 10;//对末位数字累加后去掉这一位
	}
	return ans;
}
int main() {
	int n;
	scanf("%d", &n);
	int ans = jisuan(n);
	printf("%d\n", ans);
	return 0;
}