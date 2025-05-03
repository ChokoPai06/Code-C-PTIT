#include <stdio.h> 
#include <math.h>
long long hh[10];
int nt(int n) {
   if (n < 2) return 0;
   for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
         return 0;
      }
   }
   return 1;
}
int cnt = 0; 
void checkhh() {
   for (int i = 1; i <= 32; i++) {
      if (nt(i)) {
         long long temp = (int)pow(2, i) - 1;
         if (nt(temp)) {
            hh[cnt++] = 1ll * temp * (int)pow(2, i - 1);
         }
      }
   }
}
int main() {
   checkhh();
   int n;
   scanf("%d", &n);
   int check = 0;
   for (int i = 0; i < 10; i++) {
      if (n == hh[i]) {
         check = 1;
         break;
      }
   }
   if (check) {
      printf("1");
   } else printf("0");
   return 0;
}