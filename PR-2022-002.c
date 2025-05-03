#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int check(long long n) {
   if (n < 2) return 0;
   for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return 0;
   }
   return 1;
}

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char n[1000];
      scanf("%s", n);
      int cur = 0;
      int p = 1;
      for (int i = 0; i < strlen(n); i++) {
         long long num = atoll(n);
         if (!check(num)) {
            p = 0;
            break;
         }
         char first = n[0];
         for (int j = 0; j < strlen(n) - 1; j++) {
            n[j] = n[j + 1];
         }
         n[strlen(n) - 1] = first;
      }
      if (p) {
         printf("1 ");
      } else printf("0 ");
   }
   return 0;
}