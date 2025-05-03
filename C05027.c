#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   long long row = 1e9, col = 1e9;
   for (int i = 0; i < n; i++) {
      int a, b;
      scanf("%d%d", &a, &b);
      if (a < row) row = a;
      if (b < col) col = b;
   }
   long long cnt = row * col;
   printf("%lld", cnt);
   return 0;
}