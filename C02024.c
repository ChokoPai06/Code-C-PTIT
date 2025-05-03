#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   for (int i = 1; i <= n; i++) {
      int init = i;
      int init2 = i - 1;
      int init3 = m;
      for (int j = 1; j <= m; j++) {
         if (i <= m) {
            if (init <= m) {
               printf("%c", 64 + init++);
            } else printf("%c", 64 + init2--);
         } else printf("%c", 64 + init3--);
      }
      printf("\n");
   }
   return 0;
}