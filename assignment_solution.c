#include <stdio.h>

#define M 1000000007

typedef long long int lli;

int main(void) {

	int t;
	scanf("%d", &t);

	while (t--) {
		lli n, i, a = 1, b = 1;
		scanf("%lld", &n);
		for (i = 0; i < n; i++) {
			a = (a + b) % M;
			b = a - b;
		}
		printf("%lld\n", a);
	}

	return 0;
}
