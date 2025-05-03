#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      long long n;
      scanf("%lld", &n);
      int max = 0, min = 9;
      while (n != 0) {
         int check = n % 10;
         if (check > max) max = check;
         if (check < min) min = check;
         n /= 10;
      }
      printf("%d %d\n", max, min);
   }
   return 0;
}