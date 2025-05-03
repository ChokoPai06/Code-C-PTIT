#include <stdio.h> 
#include <stdlib.h>

struct mat_hang{
   int order;
   char name[100];
   char product[100];
   double purchase_price;
   double sale_price;
   double profit;
};

int cmp(const void*a, const void*b) {
   return (double)((struct mat_hang*)b)->profit - (double)((struct mat_hang*)a)->profit;
}

int main() {
   int n;
   scanf("%d", &n);
   struct mat_hang res[100];
   int order = 1;
   for (int i = 0; i < n; i++) {
      scanf("\n");
      gets(res[i].name);
      scanf("\n");
      gets(res[i].product);
      scanf("\n");
      scanf("%lf%lf", &res[i].purchase_price, &res[i].sale_price);
      res[i].order = order++;
      res[i].profit = res[i].sale_price - res[i].purchase_price;
   }
   qsort(res, n, sizeof(struct mat_hang), cmp);
   for (int i = 0; i < n; i++) {
      printf("%d %s %s %.2lf\n", res[i].order, res[i].name, res[i].product, res[i].profit);
   }
   return 0;
}