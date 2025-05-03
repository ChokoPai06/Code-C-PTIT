#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n;
   scanf("%d", &n);
   int init2 = 1;
   for (int i = n; i >= 1; i--) {
      int init = init2;
      for (int j = 1; j <= i; j++) {
         printf("%c", init + 64);
         init += 2;
      }
      init2 += 2;
      printf("\n");
   }
   return 0;
}  