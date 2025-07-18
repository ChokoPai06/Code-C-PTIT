#include <stdio.h> 
 
int main() {
	int n, q;
	scanf("%d%d", &n, &q);
	char a[n + 1][n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%s", a[i]);
	}
	int forest[n + 1][n + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i - 1][j - 1] == '.') {
				forest[i][j] = 0;
			} else forest[i][j] = 1;
		}
	}
	int prefix[n + 1][n + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			prefix[i][j] = prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1] + forest[i][j];
		}
	}
	while (q--) {
		int x1, y1, x2, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		int ans = prefix[x2][y2] - prefix[x2][y1 - 1] - prefix[x1 - 1][y2] + prefix[x1 - 1][y1 - 1];
		printf("%d\n", ans);
	}
}