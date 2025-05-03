#include <stdio.h> 
#include <stdlib.h>

int cmp_inc(const void *a, const void *b){
      // int *x = (int*)a;
      // int *y = (int*)b;
   return *(int*)a - *(int*)b;
}
int cmp_des(const void *a, const void *b){
   return *(int*)b - *(int*)a;
}
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int m, n;
      char c;
      scanf("%d%d", &m, &n);
      scanf(" %c", &c);
      int a[m], b[n];
      int res[m + n];
      int cnt = 0;
      for(int i = 0; i < m; i++){
         scanf("%d", &a[i]);
      }
      for(int i = 0; i < n; i++){
         scanf("%d", &b[i]);
      }
      if(c == 'T' || c == 'G'){
         for(int i = 0; i < m; i++){
            res[cnt++] = a[i];
         }
         for(int i = 0; i < n; i++) {
            res[cnt++] = b[i];
         }
         if(c == 'T') {
            qsort(res, m + n, sizeof(int), cmp_inc);
         } else {
            qsort(res, m + n, sizeof(int), cmp_des);
         }
         for(int i = 0; i < m + n; i++) {
            printf("%d ", res[i]);
         }
      } else if(c == 'F') {
         for(int i = 0; i < m; i++){
            printf("%d ", a[i]);
         }
         for(int i = 0; i < n; i++){
            printf("%d ", b[i]);
         }
      } else {
         for(int i = 0; i < n; i++){
            printf("%d ", b[i]);
         }
         for(int i = 0; i < m; i++){
            printf("%d ", a[i]);
         }
      }
      printf("\n");
   }
   return 0;
}