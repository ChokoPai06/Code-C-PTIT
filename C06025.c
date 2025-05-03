#include <stdio.h>
#include <string.h>

void reversed(int a[], int n) {
   for (int i = 0; i < n / 2; i++) {
      int temp = a[i];
      a[i] = a[n - i - 1];
      a[n - i - 1] = temp;
   }
}

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char n1[1001], n2[1001];
      scanf("%s%s", n1, n2);
      if (strlen(n1) < strlen(n2) || (strlen(n1) == strlen(n2) && strcmp(n1, n2) < 0)) {
         char temp[1001];
         strcpy(temp, n1);
         strcpy(n1, n2);
         strcpy(n2, temp);
      }
      int len1 = strlen(n1), len2 = strlen(n2);
      int x[len1], y[len1], z[len1];
      for (int i = 0; i < len1; i++) x[i] = n1[i] - '0';
      for (int i = 0; i < len2; i++) y[i] = n2[i] - '0';
      reversed(x, len1), reversed(y, len2);
      for (int i = len2; i < len1; i++) y[i] = 0;
      int nho = 0, n = 0;
      for (int i = 0; i < len1; i++) {
         int temp = x[i] - y[i] - nho;
         if (temp < 0) {
            z[n++] = temp + 10;
            nho = 1;
         } else {
            z[n++] = temp;
            nho = 0;
         }
      }
      int i = n - 1;
      while (i > 0 && z[i] == 0) i--;
      for (; i >= 0; i--) {
         printf("%d", z[i]);
      }
      printf("\n");
   }
   return 0;
}