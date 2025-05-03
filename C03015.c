#include <stdio.h> 
#include <math.h>

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      long long n;
      scanf("%lld", &n);
      for (int i = 2; i <= sqrt(n); i++) {
         while(n % i == 0) {
            n /= i;
         }
      }
      printf("%lld\n", n);
   }
   return 0;
}