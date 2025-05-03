#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
      int cnt = n - 1;
      int init = i; 
      for (int j = 1; j <= i; j++) {
         if(j == 1) {
            printf("%c ", i + 64);
         } else {
            printf("%c ", init + cnt + 64);
            init += cnt;
            cnt--;
            if(cnt == 0) cnt--;
         }
      }
      printf("\n");
   }
   return 0;
}