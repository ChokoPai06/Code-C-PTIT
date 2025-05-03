#include <stdio.h> 

int main() {
   int tt;
   scanf("%d", &tt);
   for (int t = 1; t <= tt; t++) {
      int m, n;
      scanf("%d%d", &m, &n);
      int mx[m][n];
      for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++) {
            scanf("%d", &mx[i][j]);
         }
      }
      int sumx = 0, sumy = 0, x = 0, y = 0;
      for (int i = 0; i < m; i++) {
         int temp = 0;
         for (int j = 0; j < n; j++) {
            temp += mx[i][j];
         }
         if (temp > sumx) {
            sumx = temp;
            x = i;
         }
      }
      for (int j = 0; j < n; j++) {
         int temp = 0;
         for (int i = 0; i < m; i++) {
            if (i == x) continue;
            temp += mx[i][j];
         }
         if (temp > sumy) {
            sumy = temp;
            y = j;
         }
      }
      printf("Test %d:\n", t);
      for (int i = 0; i < m; i++) {
         if (i == x) continue;
         for (int j = 0; j < n; j++) {
            if (j == y) continue;
            printf("%d ", mx[i][j]);
         }
         printf("\n");
      }      
   }
   return 0;
}