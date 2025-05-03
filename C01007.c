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
   int nguyen = a / b;
   double thuc = a / b;
   int du = (int)fmod(a, b);

   printf("%.0lf\n %.0lf\n %.0lf\n %d\n %d\n %.2lf\n", tong, hieu, tich, nguyen, du, thuc);
   return 0;
}
