#include <stdio.h> 
#include <math.h>

int main(){
   float a, b, c;
   scanf("%f%f%f", &a, &b, &c);
   if(a == 0) {
      if(b == 0) {
         printf("NO");
         return 0;
      } else printf("%.2f", -c / b);
         return 0;
   }
   double delta = b * b - 4 * a * c;
   if (delta < 0) {
      printf("NO");
      return 0;
   } else if (delta == 0) {
      double x = -b / (2 * a);
      printf("%.2lf", x);
      return 0;
   } else {
      double x1 = (-b + sqrt(delta)) / (2 * a);
      double x2 = (-b - sqrt(delta)) / (2 * a);
      printf("%.2lf %.2lf", x1, x2);
   }
   return 0;
}
