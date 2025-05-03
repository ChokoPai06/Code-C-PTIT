#include <stdio.h> 

int main() {
   long long n;
   long long max = 0;
   while(scanf("%lld", &n) == 1) {
      if (n > max) max = n;
   }
   printf("%lld", max);
   return 0;
}