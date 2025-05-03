#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++) {
      for(int k = 1; k <= n - i; k++) {
         printf("~");
      }
      int m = i * 2 -1;
      for(int j = 1; j <= m; j++) {
         if(j <= i) {
            printf("%d", j * 2);
         } else printf("%d", (m - j + 1) * 2);
      }
      printf("\n");
   }
   return 0;
}