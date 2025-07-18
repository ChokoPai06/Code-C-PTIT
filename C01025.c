#include <stdio.h> 
#include <math.h>

int max (int a, int b) {
   return a > b ? a : b;
}

int min(int a, int b) {
   return a < b ? a : b;
}

int main() {
   int a1, b1, a2, b2;
   int a3, b3, a4, b4;
   scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
   scanf("%d%d%d%d", &a3, &b3, &a4, &b4);
   int x = max(a4, a2) - min(a1, a3);
   int y = max(b4, b2) - min(b1, b3);
   int res = max(x, y);
   printf("%d", res * res);
   return 0;
}