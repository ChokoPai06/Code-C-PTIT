#include <stdio.h> 
int min(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
}
int main() {
   int n;
   scanf("%d", &n);
   int m = n + n - 1;
   for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++) {
         int init = n - min(i, j, m - 1 - i, m - j - 1);
         printf("%d", init);
      }
      printf("\n");
   }
   return 0;
}