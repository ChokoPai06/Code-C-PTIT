#include <stdio.h> 
#include <math.h>
int p(int n) {
   if (n < 2) return 0;
   for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return 0;
   }
   return 1;
}
int main() {
   int n;
   scanf("%d", &n);
   int mx[n][n];
   for (int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         scanf("%d", &mx[i][j]);
      }
   }
   int cnt = 0;
   int res = -1;
   for (int i = 0; i < n; i++) {
      int temp = 0;
      for (int j = 0; j < n; j++) {
         if (p(mx[i][j])) {
            temp++;
         }
      }
      if (temp > cnt) {
         cnt = temp;
         res = i;
      }
   }
   printf("%d\n", res + 1); 
   for (int i = 0; i < n; i++) {
      if (p(mx[res][i])) {
         printf("%d ", mx[res][i]);
      }
   }
   return 0;
}