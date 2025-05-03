#include <stdio.h> 

int main(){
   float a, b;
   scanf("%f%f", &a, &b);
   double x = (0 - b) / a;
   if(a == 0) {
      if(b == 0) {
         printf("Vo so nghiem");
         return 0;
      } else printf("Vo nghiem");
         return 0;
   }
   printf("%.2f", x);
   return 0;
}
