#include <stdio.h> 
#include <stdlib.h>
int cmp(const void *a, const void *b) {
   return *(int*)a - *(int*)b;
}
int cmp2(const void *a, const void *b) {
   return *(int*)b - *(int*)a;
}
int main() {
   int t;
   scanf("%d", &t);
   for (int i = 1; i <= t; i++) {
      int n;
      scanf("%d", &n);
      int A[n], B[n];
      for (int i = 0; i < n; i++) {
         scanf("%d", &A[i]);
      }
      for (int i = 0; i < n; i++) {
         scanf("%d", &B[i]);
      }
      qsort(A, n, sizeof(int), cmp);
      qsort(B, n, sizeof(int), cmp2);
      int res[n * 2];
      int cntA = 0, cntB = 0;
      for (int i = 0; i < n * 2; i++) {
         if (i % 2 == 0) {
            res[i] = A[cntA++];
         } else res[i] = B[cntB++];
      }
      printf("Test %d:\n", i);
      for (int i = 0; i < n * 2; i++) {
         printf("%d ", res[i]);
      }
      printf("\n");
   }
   return 0;
}