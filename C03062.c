#include <stdio.h> 
long long gcd(long long a, long long b) {
   while (a != 0) {
      long long temp = a;
      a = b % a;
      b = temp;
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
      int n, m;
      scanf("%d%d", &n, &m);
      long long res = 1;
      for (int i = n; i <= m; i++) {
         res = lcm(res, i);
      }
      printf("%lld\n", res);
   }
   return 0;
}