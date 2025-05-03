#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n, p;
      scanf("%d%d", &n, &p);
      int cnt = 0, temp;
      int i = 1;
      while (p * i <= n) {
         temp = p * i;
         while (temp % p == 0) {
            temp /= p;
            cnt++;
         }
         i++;
      }
      printf("%d\n", cnt);
   }
   return 0;
}