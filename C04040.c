#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      long long a[n];
      for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
      long long sum1 = 0, sum2 = -1e18;
      for (int i = 0; i < n; i++) {
         sum1 += a[i];
         if (sum2 < sum1) sum2 = sum1;
         if (sum1 < 0) sum1 = 0;
      }
      printf("%lld\n", sum2);
   }
   return 0;
}