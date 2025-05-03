#include <stdio.h> 
#include <limits.h>

int main() {
   int num;
   int max = INT_MIN, min = INT_MAX;

   while (scanf("%d", &num) != EOF) {
      if (num > max) max = num;
      if (num < min) min = num;
   }

   printf("%d %d\n", max, min);
   return 0;
}