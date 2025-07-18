#include <stdio.h> 
#include <math.h>

int main() {
   long long x, y;
   while (scanf("%lld%lld", &x, &y) == 2) {
      long long dis = abs(y - x);
      int res = 0;
      int cur = 0, init = 1;
      if (dis < 2) {
         if (dis == 0) printf("0\n");
         if (dis == 1) printf("1\n");
         continue;
      }
      while (cur < dis) {
         cur += init * 2;
         res += 2;
         init++;
         if (cur - dis >= init - 1) {
            res--;
         }
      }
      printf("%d\n", res);
   }
   return 0;
}
// #include <stdio.h> 
// #include <math.h>

// int main() {
//    long long x, y;
//    while (scanf("%lld%lld", &x, &y) == 2) {
//       long long dis = abs(y - x);
//       if (dis < 2) {
//          if (dis == 0) printf("0\n");
//          if (dis == 1) printf("1\n");
//          continue;
//       }
//       long long k = (long long)sqrt(dis);
//       if (k * k == dis) {
//          printf("%lld\n", 2 * k - 1);
//       } else if (dis <= k * (k + 1)) {
//          printf("%lld\n", 2 * k);
//       } else {
//          printf("%lld\n", 2 * k + 1);
//       }
//    }
//    return 0;
// }