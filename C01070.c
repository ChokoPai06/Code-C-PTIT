#include <stdio.h>
#include <math.h>

int isSquare(int n) {
   int s = sqrt(n);
   return (s * s == n) ? s : 0;
}

void swap(int *a, int *b) {
   int tmp = *a;
   *a = *b;
   *b = tmp;
}

int main() {
   int a, b, c, d, e, f;
   scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
   int total = a * b + c * d + e * f;
   int side = isSquare(total);
   if (!side) {
      printf("NO");
      return 0;
   }
   if (a > b) swap(&a, &b);
   if (c > d) swap(&c, &d);
   if (e > f) swap(&e, &f);
   if (b == side && d == side && f == side) {
      printf("YES");
      return 0;
   }
   if (d == side) {
      swap(&a, &c);
      swap(&b, &d);
   }
   if (f == side) {
      swap(&a, &e);
      swap(&b, &f);
   }
   if (b == side) {
      int remain = side - a;
      if ((c == remain && e == remain) || 
         (c == remain && f == remain) || 
         (d == remain && e == remain) || 
         (d == remain && f == remain)) {
         printf("YES");
      } else {
         printf("NO");
      }
   } else {
      printf("NO");
   }

   return 0;
}