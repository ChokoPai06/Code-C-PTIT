#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++) {
      int m = i * 2 - 1;
      for(int j = 1; j <= m; j++) {
         if(j > i) {
            printf("%d", (m - j) * 2 + 1);
         } else printf("%d", j * 2 - 1);
      }
      printf("\n");
   }
   return 0;
}