#include <stdio.h> 
long long gcd(long long a, long long b) {
   while (a != 0) {
      long long x = a;
      a = b % a;
      b = x;
   }
   return b;
}
long long lcm(long long a, long long b) {
   return a * b / gcd(a, b);
}
int main() {   
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      long long minlcm = 1;
      for (int i = 1; i <= n; i++) {
         minlcm = lcm(minlcm, i);
      }
      printf("%lld\n", minlcm);
   }
   return 0;
}  