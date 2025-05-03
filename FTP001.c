#include <stdio.h> 

int main(){
   int n;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++){
      int init = 0;
      for(int j = 1; j <= n; j++){
         if(i <= j) {
            printf("%d ", init++);
         } else printf("%d ", init);
      }
      printf("\n");
   }
   return 0;
}