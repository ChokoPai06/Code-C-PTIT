#include <stdio.h> 

int main() {
   int m;
   scanf("%d", &m);
   int mx[m][m];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%d", &mx[i][j]);
      }
   }
   for (int i = 0; i < m; i++) {
      int temp = mx[i][i];
      mx[i][i] = mx[i][m - i - 1];
      mx[i][m - i - 1] = temp;
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         printf("%d ", mx[i][j]);
      }
      printf("\n");
   }
   return 0;
}