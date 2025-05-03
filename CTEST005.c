#include <stdio.h> 

int main(){
   int n, m, p;
   scanf("%d%d%d", &n, &m, &p);
   int mxA[n][m], mxB[m][p], mxAxB[n][p];
   for(int i = 0; i < n ; i++){
      for(int j = 0; j < m; j++){
         scanf("%d", &mxA[i][j]);
      }
   }
   for(int i = 0; i < m ; i++){
      for(int j = 0; j < p; j++){
         scanf("%d", &mxB[i][j]);
      }
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < p; j++){
         mxAxB[i][j] = 0;
         for(int k = 0; k < m; k++){
            mxAxB[i][j] += mxA[i][k] * mxB[k][j];
         }
      }
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < p; j++){
         printf("%d ", mxAxB[i][j]);
      }
      printf("\n");
   }
   return 0;
}