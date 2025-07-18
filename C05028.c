#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   char a[n][n];
   for (int i = 0; i < n; i++) {
         scanf("%s", a[i]);
   }
   int ans = 0;
   for (int i = n - 1; i >= 0; i--) {
      for (int j = n - 1; j >= 0; j--) {
         if (a[i][j] == '1') {
            ans++;
            for (int k = i; k >= 0; k--) {
               for (int l = j; l >= 0; l--) {
                  a[k][l] = (a[k][l] == '1') ? '0' : '1';
               }
            }
         }
      }
   }
   printf("%d\n", ans);
   return 0;
}
