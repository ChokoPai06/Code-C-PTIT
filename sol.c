#include <stdio.h> 
#include <stdlib.h>

int sum(int a) {
	int sum = 0;
	while (a != 0) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}

int cmp(const void *a, const void *b) {
	if (((int*)a)[1] == ((int*)b)[1]) {
		return ((int*)a)[0] - ((int*)b)[0];
	}
	return ((int*)a)[1] - ((int*)b)[1];
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[n][2];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i][0]);
		}
		for (int i = 0; i < n; i++) {
			a[i][1] = sum(a[i][0]);
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i][0]);
		}
		printf("\n");
	}
	return 0;
}