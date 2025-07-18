#include <stdio.h> 
#include <math.h>

int check (int n) {
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
   int sum = 0;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mx[i][j]);
         if (check(mx[i][j]) && j >= i) sum += mx[i][j];
      }
   }
   printf("%d", sum);
   return 0;
}