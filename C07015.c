#include <stdio.h> 
#include <stdlib.h>

struct DanhSach{
   int order;
   char name[100];
   char birthday[100];
   double p1, p2, p3;
   double total_p;
};

int cmp(const void*a, const void*b) {
   return ((struct DanhSach*)a)->order - ((struct DanhSach*)b)->order;
}

int main() {
   int n;
   scanf("%d", &n);
   struct DanhSach res[100];
   double highest = 0;
   for (int i = 0; i < n; i++) {
      res[i].order = i + 1;
      scanf("\n");
      gets(res[i].name);
      scanf("\n");
      gets(res[i].birthday);
      scanf("\n");
      scanf("%lf%lf%lf", &res[i].p1, &res[i].p2, &res[i].p3);
      res[i].total_p = res[i].p1 + res[i].p2 + res[i].p3;
      if (res[i].total_p >= highest) {
         highest = res[i].total_p;
      }
   }
   qsort(res, n, sizeof(struct DanhSach), cmp);
   for (int i = 0; i < n; i++) {
      if (res[i].total_p == highest) {
         printf("%d %s %s %.1lf\n", res[i].order, res[i].name, res[i].birthday, res[i].total_p);
      }
   }
   return 0;
}