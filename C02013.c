#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   for (int i = 1; i <= n; i++) {
      int init = max(n, m) - i + 1;
      int init2 = i;
      for (int j = m; j >= 1; j--) {
         if (init >= 1) {
            printf("%d", init--);
            init2 = init + 1;
         } else printf("%d", ++init2);
      }
      printf("\n");
   }
   return 0;
}