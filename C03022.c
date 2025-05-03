#include <stdio.h>
#include <math.h>

int prime[10005];
void sieve() {
   for(int i = 0; i < 10005; i++) {
      prime[i] = 1;
   }
   prime[0] = prime[1] = 0;
   for(int i = 2; i <= sqrt(10005); i++) {
      if(prime[i]) {
         for(int j = i * i; j <= 10005; j += i) {
            prime[j] = 0;
         }
      }
   }
}
int check(int n) {
   int sum = 0;
   while (n != 0) {
      sum += n % 10;
      n /= 10;
   }
   if (sum % 5 == 0) {
      return 1;
   } else return 0;

}
int main() {
   sieve();
   int n;
   scanf("%d", &n);
   int cnt = 0;
   for(int i = 5; i < n; i++) {
      if(prime[i] && check(i)) {
         cnt++;
         printf("%d ", i);
      }
   }
   printf("\n");
   printf("%d", cnt);
   return 0;
}