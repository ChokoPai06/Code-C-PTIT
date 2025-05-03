#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   for (int i = 1; i <= n; i++) {
      int init = i;
      for (int j = 1; j <= m; j++) {
         if (i < m) {
            if (init <= m) {
               printf("%c", 63 + init++);
            } else printf("%c", 63 + init - 1);
         } else printf("%c", 63 + m);
      }
      printf("\n");
   }
   return 0;
}