#include <stdio.h> 

int main(){
   double a, b;
   scanf("%lf%lf", &a, &b);
   if (b == 0){
      printf("0");
      return 0;
   }
   double tong = a + b;
   double hieu = a - b;
   double tich = a * b;
   double thuc = a / b;
   int du = fmod(a, b);
   printf("%.0lf %.0lf %.0lf %.2lf %d", tong, hieu, tich, thuc, du);
   return 0;
}
