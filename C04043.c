#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int cmp(const void*a, const void *b) {
   return *(long long*)a - *(long long*)b;
}

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      long long a[5005];
      for (int i = 0; i < n; i++) {
         scanf("%lld", &a[i]);
      }
      qsort (a, n, sizeof(long long), cmp);  
      int check = 0;
      for (int i = n - 1; i >= 2; i--) {
         int j = 0, k = i - 1;
         while (j < k) {
            long long l = a[j]*a[j] + a[k]*a[k];
            long long r = a[i]*a[i];
            if (l == r) {
               printf("YES\n");
               check = 1;
               break;
            } else if (l < r) j++;
            else k--;
         }
         if (check) break;
      }
      if (!check) printf("NO\n");
   }
   return 0;
}