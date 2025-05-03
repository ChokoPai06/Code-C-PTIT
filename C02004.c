#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int cnt = n - 1;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k < cnt; k++) {
         printf("~");
      }
      cnt--;
      for (int j = 0; j < n; j++) {
         if (i > 0 && i < n - 1 && j > 0 && j < n - 1) printf(".");
         else printf("*");
      }
      printf("\n");
   }
   return 0;
}