#include <stdio.h> 

int main(){
   int c;
   scanf("%d", &c);
   float f = 0;
   f = ((float)c * 9 / 5) + 32;
   printf("%.2f\n", f);
   return 0;
}