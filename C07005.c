#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      double a1, b1, a2, b2, a3, b3;
      scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &a2, &b2, &a3, &b3);
      double a = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
      double b = sqrt((a1 - a3) * (a1 - a3) + (b1 - b3) * (b1 - b3));
      double c = sqrt((a3 - a2) * (a3 - a2) + (b3 - b2) * (b3 - b2));
      if (a + b <= c || a + c <= b || b + c <= a) {
         printf("INVALID\n");
         continue;
      }
      double ans = a + b + c;
      printf("%.3lf\n", ans);
   }
   return 0;
}
