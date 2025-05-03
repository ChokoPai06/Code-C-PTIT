#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int checkprime(int n){
   if(n < 2) return 0;
   for(int i = 2; i <= sqrt(n); i++){
      if(n % i == 0) return 0;
   }
   return 1;
}
int cmp(const void *a, const void *b){
   return (*(int*)a - *(int *)b);
}
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int a[n];
      int res[n];
      int cnt = 0;
      for(int i = 0; i < n; i++) {
         scanf("%d", &a[i]);
      }
      for(int i = 0; i < n; i++){
         if(checkprime(a[i])){
            int fnd = 0;
            for(int j = 0; j < cnt; j++){
               if(res[j] == a[i]){
                  fnd = 1;
                  break;
               }
            }
            if(!fnd) {
               res[cnt++] = a[i];
            }
         }
      }
      // for(int i = 0; i < cnt - 1; i++){
      //    for(int j = i + 1; j < cnt; j++){
      //       if(res[i] > res[j]){
      //          int temp = res[i];
      //          res[i] = res[j];
      //          res[j] = temp;
      //       }
      //    }
      // }
      qsort(res, cnt, sizeof(int), cmp);
      for(int i = 0; i < cnt; i++){
         printf("%d ", res[i]);
      }
      printf("\n");
   }
   return 0;
}