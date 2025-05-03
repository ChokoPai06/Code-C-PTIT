#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   for (int k = 1; k <= t; k++) {
      int n;
      scanf("%d", &n);
      int a[n];
      for (int i = 0 ; i < n; i++) {
         scanf("%d", &a[i]);
      }
      int cnt = 1, len = 1;
      int arr[n], index = 0;
      for (int i = 1; i < n; i++) {
         if (a[i] > a[i - 1]) {
            cnt++;
         } else {
            if (cnt > len) {
               len = cnt;
               index = 0;
               arr[index++] = i - cnt;
            } else if (cnt == len) {
               arr[index++] = i - cnt;
            }
            cnt = 1;
         }
      }
      if (cnt > len) {
         len = cnt;
         index = 0;
         arr[index++] = n - cnt;
      } else if (cnt == len) {
         arr[index++] = n - cnt;
      }
      printf("Test %d:\n", k);
      printf("%d\n", len);
      for (int i = 0; i < index; i++) {
         for (int j = arr[i]; j < arr[i] + len; j++) {
            printf("%d ", a[j]);
         }
         printf("\n");
      }
   }  
   return 0;
}