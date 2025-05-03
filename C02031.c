#include <stdio.h> 
int max(int a, int b) {
   return a > b ? a : b;
}
int main() {
   int n;
   scanf("%d", &n);
   for (int i = n; i >= 1; i--) {
      int init = i;
      for (int j = 1; j <= i; j++) {
         printf("%c", 63 + init++); 
      }
      printf("\n");
   }
   return 0;
}