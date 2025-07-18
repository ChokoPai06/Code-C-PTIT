#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n, m;
      scanf("%d%d", &n, &m);
      int a[n][m];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
         }
      }
      int l = 0, r = m - 1, t = 0, b = n - 1;
      while (l <= r && t <= b) {
         for (int j = l; j <= r; j++) {
            printf("%d ", a[t][j]);
         }
         t++;
         for (int i = t; i <= b; i++) {
            printf("%d ", a[i][r]);
         }
         r--;
         if (t <= b) {
            for (int j = r; j >= l; j--) {
               printf("%d ", a[b][j]);
            }
            b--;
         }
         if (l <= r) {
            for (int i = b; i >= t; i--) {
               printf("%d ", a[i][l]);
            }
            l++;
         }
      }
      printf("\n");
   }
   return 0;
}