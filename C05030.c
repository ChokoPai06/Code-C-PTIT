#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n, m;
      scanf("%d%d", &n, &m);
      char a[n][m];
      int row1[1005] = {};
      int row2[1005] = {};
      int col1[1005] = {};
      int col2[1005] = {};
      for (int i = 0; i < n; i++) {
         scanf("%s", a[i]);
         for (int j = 0; j < m; j++) { 
            if (a[i][j] != '0') {
               if (a[i][j] == '1') {
                  row1[i]++;
                  col1[j]++;
               } else {
                  row2[i]++;
                  col2[j]++;
               }
            }
         }
      }
      long long ans = 0;
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            int r = 0;
            int c = 0;
            if (a[i][j] != '0') {
               if (a[i][j] == '1') {
                  ans += row2[i] * col2[j];
               } else {
                  ans += row1[i] * col1[j];
               }
            }
         }
      }
      printf("%lld\n", ans); 
   }
   return 0;
}