#include <stdio.h> 

int main() {
   int tt;
   scanf("%d", &tt);
   for (int t = 1; t <= tt; t++) {
      int n, m;
      scanf("%d%d", &n, &m);
      int mx[n][m];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            scanf("%d", &mx[i][j]);
         }
      }
      int cv[m][n];
      for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++) {
            cv[i][j] = mx[j][i];
         }
      }
      int res[n][n];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < m; k++) {
               res[i][j] += mx[i][k] * cv[k][j];
            }
         }
      }
      printf("Test %d:\n", t);
      for (int i = 0; i < n; i++){ 
         for (int j = 0; j < n; j++){
            printf("%d ", res[i][j]);
         }
         printf("\n");
      }
   }  
   return 0;
}  