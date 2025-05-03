#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++) {
      int gh = n - i;
      for(int j = 1; j <= gh; j++) {
         printf("~");
      }
      int m = i * 2 - 1;
      for(int k = 1; k <= m; k++) {
         if(k <= i) {
            printf("%d", k * 2 - 1);
         } else printf("%d", (m - k) * 2 + 1);
      }
      printf("\n");
   }
   return 0;
}