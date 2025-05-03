#include <stdio.h> 
#include <math.h>

int gcd (int a, int b) {
   while (a != 0) { 
      int temp = a;
      a = b % a;
      b = temp;
   }
   return b;
}
int check (int n) {
   if (n < 2) return 0;
   for (int i = 2; i < sqrt(n); i++) {
      if (n % i == 0) return 0;
   }
   return 1;
}
int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int a, b;
      scanf("%d%d", &a, &b);
      int res1 = gcd(a, b);
      int sum = 0;
      while (res1 != 0) {
         sum += res1 % 10;
         res1 /= 10;
      }
      if (check(sum)) {
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}