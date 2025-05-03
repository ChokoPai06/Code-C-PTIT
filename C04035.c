#include <stdio.h>
#include <stdlib.h>

int T[25001], D[25001], idx[25001];

int cmp(const void *a, const void *b) {
   int i = *(int*)a;
   int j = *(int*)b;
   return D[j] - D[i];
}

int main() {
   int n;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      scanf("%d%d", &T[i], &D[i]);
      idx[i] = i;
   }
   qsort(idx, n, sizeof(int), cmp);
   int cur = 0, res = 0;
   for (int k = 0; k < n; k++) {
      int i = idx[k];
      cur += T[i];
      int finish = cur + D[i];
      if (finish > res) res = finish;
   }
   printf("%d\n", res);
   return 0;
}
