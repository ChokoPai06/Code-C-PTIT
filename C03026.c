#include <stdio.h> 
#include <string.h>
#include <math.h>
int checktn(char num[]) {
   for (int i = 0; i < strlen(num) / 2; i++) {
      if (num[i] != num[strlen(num) - i - 1]) {
         return 0;
      }
   }
   return 1;
}
int main() {
   long long a, b;
   scanf("%lld%lld", &a, &b);
   char num[20];
   char num2[20];
   sprintf(num, "%lld", a);
   sprintf(num2, "%lld", b);
   int first = 0;
   int second = 0;
   if(checktn(num)) first++;  
   if(checktn(num2)) second++;
   if(abs(first - second) == 1) {
      printf("YES\n");
   } else printf("NO\n");
   return 0;
}