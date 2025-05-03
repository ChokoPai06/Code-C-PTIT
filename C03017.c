#include <stdio.h> 
#include <string.h>

int checktn(char num[]) {
   for (int i = 0; i < strlen(num) / 2; i++) {
      if (num[i] != num[strlen(num) - i - 1]) {
         return 0;
      }
   }
   return 1;
}
int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      long long n;
      scanf("%lld", &n);
      char num[20];
      sprintf(num, "%lld", n);
      if(checktn(num)) {
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}