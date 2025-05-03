#include <stdio.h> 

int main() {
   int n, m;
   scanf("%d%d", &n, &m);
   int a[n], b[m];
   int fregA[1005] = {0}, fregB[1005] = {0};
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      fregA[a[i]] = 1;
   }
   for (int i = 0; i < m; i++) {
      scanf("%d", &b[i]);
      fregB[b[i]] = 1;
   }
   for (int i = 0; i <= 1000; i++) {
      if (fregA[i] && fregB[i]) {
         printf("%d ", i);
      }
   }
   printf("\n");
   for (int i = 0; i <= 1000; i++) {
      if (fregA[i] && !fregB[i]) {
         printf("%d ", i);
      }
   } 
   printf("\n");
   for (int i = 0; i <= 1000; i++) {
      if (!fregA[i] && fregB[i]) {
         printf("%d ", i);
      }
   }
   return 0;
}