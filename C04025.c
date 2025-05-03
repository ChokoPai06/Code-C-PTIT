#include <stdio.h> 
#include <stdlib.h>
 
int cmp (const void *a, const void *b) {
   return *(int*)a - *(int*)b;
}
int main() {
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   int even[n],  odd[n];
   int ev = 0, od = 0;
   for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) even[ev++] = a[i];
      else odd[od++] = a[i];
   }
   qsort (even, ev, sizeof(int), cmp);
   qsort (odd, od, sizeof(int), cmp);
   for (int i = 0; i < ev; i++) printf("%d ", even[i]);
   for (int i = 0; i < od; i++) printf("%d ", odd[i]);
   return 0;
}