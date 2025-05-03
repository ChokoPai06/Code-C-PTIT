#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int init = n - 1;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k < init; k++) {
         printf("~");
      }
      init--;
      for (int j = 0; j < n; j++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}