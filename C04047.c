#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int T[n], D[n];
   for (int i = 0; i < n; i++) {
      scanf("%d%d", &T[i], &D[i]);
   }
   for (int i = 0 ; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (T[i] > T[j]) {
            int temp = T[i];
            T[i] = T[j];
            T[j] = temp;
            temp = D[i];
            D[i] = D[j];
            D[j] = temp;
         }
      }
   }
   int res = T[0] + D[0];
   for (int i = 0; i < n - 1; i++) {
      if (res < T[i + 1]) {
         res = T[i + 1] + D[i + 1];
      } else {
         res += D[i + 1];
      }
   }
   printf("%d", res);
   return 0;
}