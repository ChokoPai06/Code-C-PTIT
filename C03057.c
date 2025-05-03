#include <stdio.h> 
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char num[20], num2[20];
      scanf("%s%s", num, num2);
      char res[20], res2[20], res3[20], res4[20];
      strcpy (res, num);
      strcpy (res2, num2);
      strcpy (res3, num);
      strcpy (res4, num2);
      for (int i = 0; i < strlen(num); i++) {
         if (num[i] == '6') res[i] = '5';
      }
      for (int i = 0; i < strlen(num2); i++) {
         if (num2[i] == '6') res2[i] = '5';
      }
      long long fi = atoll(res) + atoll(res2);
      
      for (int i = 0; i < strlen(num); i++) {
         if (num[i] == '5') res3[i] = '6';
      }
      for (int i = 0; i < strlen(num2); i++) {
         if (num2[i] == '5') res4[i] = '6';
      }
      long long se = atoll(res3) + atoll(res4);
      printf("%lld %lld\n", fi, se);
   }
   return 0;
}