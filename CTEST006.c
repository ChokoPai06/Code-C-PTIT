#include <stdio.h>
#include <math.h>

int checkprime(int n){
   if(n < 2) return 0;
   for(int i = 2; i <= sqrt(n); i++){
      if(n % i == 0) return 0;
   }
   return 1;
}
int main(){
   int n, m;
   scanf("%d%d", &n, &m);
   int mxA[n][m];
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         scanf("%d", &mxA[i][j]);
      }
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         if(checkprime(mxA[i][j])) {
            mxA[i][j] = 1;
         } else mxA[i][j] = 0;
      }
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         printf("%d ", mxA[i][j]);
      }
      printf("\n");
   }
   return 0;
}