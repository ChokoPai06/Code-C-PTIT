#include <stdio.h> 

int main() {
   int n, m, k;
   scanf("%d%d%d", &n, &m, &k);
   int x[n];
   for (int i = 0; i < m; i++) {
      scanf("%d", &x[i]);
   }
   int light[n];
   for (int i = 0; i < n; i++) {
      light[i] = 0;
   }
   for (int i = 0; i < m; i++) {
      int left = x[i] - k - 1;
      if (left < 0) {
         left = 0;
      }
      int right = x[i] + k - 1;
      if (right > n) {
         right = n - 1;
      }
      for (int j = left; j <= right; j++) {
         light[j] = 1;
      }
   }
   int cnt = 0;
   for (int i = 0; i < n; i++) {
      if (light[i] == 0) {
         cnt++;
         int pos = i + k;
         int left = pos - k;
         if (left < 0) left = 0;
         int right = pos + k;
         if (right > n - 1) right = n - 1;
         for (int j = left; j <= right; j++) {
            light[j] = 1;
         }
      }
   }
   printf("%d", cnt);
   return 0;
}