#include <stdio.h>
#include <string.h>

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char n1[501], n2[501];
      scanf("%s%s", n1, n2);
      if (strlen(n1) < strlen(n2)) {
         char temp[501];
         strcpy(temp, n1);
         strcpy(n1, n2);
         strcpy(n2, temp);
      }
      int len1 = strlen(n1), len2 = strlen(n2);\
      int x[len1], y[len1], z[len1 + 1];
      for (int i = 0; i < len1; i++) x[i] = n1[i] - '0';
      for (int i = 0; i < len2; i++) y[i] = n2[i] - '0';
      for (int i = 0; i < len1 / 2; i++) {
         int temp = x[i];
         x[i] = x[len1 - i - 1];
         x[len1 - i - 1] = temp;
      }
      for (int i = 0; i < len2 / 2; i++) {
         int temp = y[i];
         y[i] = y[len2 - i - 1];
         y[len2 - i - 1] = temp;
      }
      for (int i = len2; i < len1; i++) y[i] = 0;

      int nho = 0, n = 0;
      for (int i = 0; i < len1; i++) {
         int temp = x[i] + y[i] + nho;
         z[n++] = temp % 10;
         nho = temp / 10; 
      }
      if (nho > 0) z[n++] = nho;
      for (int i = n - 1; i >= 0; i--) {
         printf("%d", z[i]);
      }
      printf("\n");
   }
   return 0;
}