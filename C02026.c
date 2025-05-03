#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   for (int i = n; i >= 1; i--) {
      int init = i;
      for (int j = 1; j <= m; j++) {
         if (i > m) {
            printf("%c", 64 + m);
         } else {
            if (init <= m) {
               printf("%c", 64 + init++);
            } else printf("%c", 64 + init - 1);
         }
      }
      printf("\n");
   }
   return 0;
}