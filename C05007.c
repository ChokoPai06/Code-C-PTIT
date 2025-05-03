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
   a--;
   b--;
   int temp[m];
   for (int i = 0; i < m; i++) {
      temp[i] = mx[i][a];
      mx[i][a] = mx[i][b];
      mx[i][b] = temp[i];
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", mx[i][j]);
      }
      printf("\n");
   }
   return 0;
}