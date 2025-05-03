#include <stdio.h> 
   #include <math.h>
   #define MAX 2000005
   int spf[MAX];
   void sieve() {
      for (int i = 2; i <= MAX; i++) {
         spf[i] = i;
      }
      for (int i = 2; i <= sqrt(MAX); i++) {
         if (spf[i] == i) {
            for (int j = i * i; j <= MAX; j += i) {
                  if (spf[j] == j) {
                     spf[j] = i;
                  }
            }
         }
      }
   }
   int sumpf(int n) {
      int sum = 0;
      while (n > 1) {
         sum += spf[n];
         n /= spf[n];
      }
      return sum;
   }
   int main() {
      sieve();
      int n;
      scanf("%d", &n);
      int arr[n];
      long long sum = 0;
      for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
         if(arr[i] == 1){
            continue;
         }
         sum += sumpf(arr[i]);
      }
      printf("%lld", sum);
      return 0;
   }