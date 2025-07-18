#include <stdio.h> 
#include <stdlib.h>

int cmp(const void*a, const void*b) {
   return *(long long*)a - *(long long*)b;
}

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      long long a[n];
      for (int i = 0; i < n; i++) {
         scanf("%lld", &a[i]);
      }
      qsort(a, n, sizeof(long long), cmp);
      long long min = 1e9;
      int cnt = 0;
      for(int i = 1; i < n; i++) {
         if (a[i] - a[i - 1] < min) {
            min = a[i] - a[i - 1];
            cnt = 1;
            continue;
         } if (a[i] - a[i - 1] == min) {
            cnt++;
         }
      }
      printf("%d %d\n", min, cnt);
   }
   return 0;
}