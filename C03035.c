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
int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int reversed = 0;
      int temp = n;
      while (temp != 0) {
         reversed = reversed * 10 + (temp % 10);
         temp /= 10;
      }
      if (gcd(n, reversed) == 1) {
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}