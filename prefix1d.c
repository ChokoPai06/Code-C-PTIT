#include <stdio.h> 
 
int main() {
	int n, q;
	scanf("%d%d", &n, &q);
  int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	long long prefix[n];
	for (int i = 0; i < n; i++) {
		if (i == 0) { 
			prefix[i] = a[i];
		} else prefix[i] = prefix[i - 1] + a[i];
	}
	while (q--) {
		int l, r;
		scanf("%d%d", &l, &r);
		if (l == 1) {
			printf("%lld\n", prefix[r - 1]);
		} else {
			long long ans = prefix[r - 1] - prefix[l - 2];
			printf("%lld\n", ans);
		}
	}
	return 0;
}