#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

struct strigle {
   int a, b, c;
   int p;
   int s;
};

int cmp(const void *a, const void *b) {
   return ((struct strigle*)a)->s - ((struct strigle*)b)->s;
}

int main() {
   int n;
   scanf("%d", &n);
      struct strigle tg[n];
      for (int i = 0; i < n; i++) {
         scanf("%d%d%d", &tg[i].a, &tg[i].b, &tg[i].c);
         tg[i].p = (tg[i].a + tg[i].b + tg[i].c) / 2;
         tg[i].s = sqrt((tg[i].p * (tg[i].p - tg[i].a) * (tg[i].p - tg[i].b) * (tg[i].p - tg[i].c)));
      }
   qsort(tg, n, sizeof(struct strigle), cmp);
   for (int i = 0; i < n; i++) {
      printf("%d %d %d\n", tg[i].a, tg[i].b, tg[i].c);
   }
   return 0;
}