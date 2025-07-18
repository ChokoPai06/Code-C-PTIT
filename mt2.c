#include <stdio.h> 

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    int ok = 1;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i][j] != a[j][i]) {
          ok = 0;
          break;
        }
      }
    }
    if (!ok) {
      printf("NO\n");
    } else printf("YES\n");
  }
  return 0;
}