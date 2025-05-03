#include <stdio.h>

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      long long n;
      scanf("%lld", &n);
      long long res;
      res = n * n;
      printf("%lld\n", res);
   }
   return 0;
}