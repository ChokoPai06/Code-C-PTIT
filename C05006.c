#include <stdio.h> 

int main() {
   int m, n;
   scanf("%d%d", &m, &n);
   int mx[m][n];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mx[i][j]);
      }
   }
   int a, b;
   scanf("%d%d", &a, &b);
   a--, b--;
   int temp[n];
   for (int i = 0; i < n; i++) {
      temp[i] = mx[a][i];
      mx[a][i] = mx[b][i];
      mx[b][i] = temp[i];
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", mx[i][j]);
      }
      printf("\n");
   }
   return 0;
}