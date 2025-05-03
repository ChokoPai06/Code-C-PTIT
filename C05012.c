#include <stdio.h> 

int main() {
   int tt;
   scanf("%d", &tt);
   for (int t = 1; t <= tt; t++) {
      int n;
      scanf("%d", &n);
      int mx[n][n], cv[n][n];
      for (int i = 0; i < n; i++) {
         int init = 1;
         for (int j = 0; j < n; j++) {
            if (j <= i) {
               mx[i][j] = init++;
            } else mx[i][j] = 0;
         }
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            cv[i][j] = mx[j][i];
         }
      }
      int res[n][n];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++) {
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