#include <stdio.h> 

int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   int cnt = 0;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k < cnt; k++) {
         printf("~");
      }
      cnt++;
      for (int j = 0; j < m; j++) {
         if (i > 0 && i < n - 1 && j > 0 && j < m - 1) printf(".");
         else printf("*");
      }
      printf("\n");
   }
   return 0;
}