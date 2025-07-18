#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int CheckKhongGiam(char a[]) {
   for (int i = 0; i < strlen(a) - 1; i++) {
      if (a[i] > a[i + 1]) {
         return 0;
      }
   }
   return 1;
}

int main() {
   int a[100005], b[100005] = {0};
   int num, n = 0;
   while (scanf("%d", &num) == 1) {
      char temp[20];
      sprintf(temp, "%d", num);
      if (CheckKhongGiam(temp)) {
         int fnd = 0;
         for (int i = 0; i < n; i++) {
            if (a[i] == num) {
               fnd = 1;
               b[i]++;
               break;
            }
         }
         if (!fnd) {
            a[n] = num;
            b[n]++;
            n++;
         }
      }
   }
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (b[i] < b[j]) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
         }
      }
   }
   for (int i = 0; i < n; i++) {
      printf("%d %d\n", a[i], b[i]);
   }
   return 0;
}