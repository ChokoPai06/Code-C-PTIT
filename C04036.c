#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int money[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
      int cnt = 0;
      for (int i = 0; i < 10; i++) {
         while (n >= money[i]) {
            n -= money[i];
            cnt++;
         }
      }
      printf("%d\n", cnt);
   }
   return 0;
}