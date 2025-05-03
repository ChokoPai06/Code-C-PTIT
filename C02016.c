#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int init = 1;
   for(int i = 0; i < n; i++) {
      for(int j = 1; j <= init; j++) {
         if(i % 2 == 0) {
            printf("%d", j * 2 - 1);
         } else printf("%d", j * 2);
         if(j == init) {
            init++;
            break;
         }
      }
      printf("\n"); 
   }
   return 0;
}