#include <stdio.h> 
#include <stdlib.h>

struct ThiSinh {
   int order;
   char name[100];
   char birthday [100];
   double p1, p2, p3;
   double total;
};

int cmp(const void*a, const void*b) {
   if (((struct ThiSinh*)b)->total == ((struct ThiSinh*)a)->total) {
      return ((struct ThiSinh*)a)->order - ((struct ThiSinh*)b)->order;
   }
   return ((struct ThiSinh*)b)->total > ((struct ThiSinh*)a)->total ? 1 : -1; 
}

int main() {
   int n;
   scanf("%d", &n);
   struct ThiSinh res[100];
   for (int i = 0; i < n; i++) {
      res[i].order = i + 1;
      scanf("\n");   
      gets(res[i].name);
      scanf("\n");
      gets(res[i].birthday);
      scanf("\n");
      scanf("%lf%lf%lf", &res[i].p1, &res[i].p2, &res[i].p3);
      res[i].total = res[i].p1 + res[i].p2 + res[i].p3;
   }
   qsort(res, n, sizeof(struct ThiSinh), cmp);
   for (int i = 0; i < n; i++) {
      printf("%d %s %s %.1lf\n", res[i].order, res[i].name, res[i].birthday, res[i].total);
   }
   return 0;
}