#include <stdio.h> 

int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   for (int i = 1; i <= n; i++) {
      int init = i;
      int init2 = i;
      for (int j = 1; j <= m; j++) {
         if (init >= 1) {
            printf("%d", init--);
            init2 = init + 1;
         } else printf("%d", ++init2);
      }
      printf("\n");
   }
   return 0;
}