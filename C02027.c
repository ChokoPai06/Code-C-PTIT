#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int init = 1;
   for (int i = 1; i <= n; i++) {
      init += i - 1;
      if (i % 2 != 0) {
         for(int j = 1; j <= i; j++) {
            printf("%c ", 96 + init++);
         }
      } else {
         for(int j = 1; j <= i; j++) {
            printf("%c ", 96 + init--);
         }
         init += 1;
      }
      printf("\n");
   }
   return 0;
}