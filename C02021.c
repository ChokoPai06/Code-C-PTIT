   #include <stdio.h> 

   int main() {
      int n;
      scanf("%d", &n);
      for(int i = 1; i <= n; i++) {
         int res = n - 1;
         int nit = i;
         nit += res;
         for(int j = 1; j <= i; j++) {
            if(j > 1) {
               printf("%d ", nit);
                  res--;
               nit += res;
            } else printf("%d ", i);
         }
         printf("\n");
      }
      return 0;
   }