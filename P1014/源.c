#include<stdio.h>
//lavandejoey
int main() {
	long long int n, a, b, i ,j, k;
	scanf("%lld", &n);
	k = n;
	for (i = 1; k > i; i++) {
		k -= i;
	}
	a = k;
	for (j = i; k > 0 ; j--) {
		b = j;
		k--;
	}
	if (i % 2 == 0) {
		printf("%lld/%lld", b, a);
	}
	else {
		printf("%lld/%lld", a, b);
	}
	return 0;
}