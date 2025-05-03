#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int m = n * 2 - 1;
   for (int i = 1; i <= n; i++) {
      int cnt = 2;
      int init = 1;
      int limit = i * 2 - 1;
      for (int j = 1; j <= limit; j++) {
         if(j <= i) {
            printf("%c", init + cnt + 61);
            init += cnt;
         } else {
            printf("%c", init - cnt + 61);
            init -= cnt;
         }
      }
      printf("\n");
   }  
   return 0;
}