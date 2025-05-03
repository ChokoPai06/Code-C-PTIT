#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int init = 1;
   for(int i = 0; i < n; i++){
      for(int j = 1; j <= init; j++) {
         printf("%d", j);
         if(j == init) {
            init += 2;
            break;
         }
      }
      printf("\n");
   }
   return 0;
}