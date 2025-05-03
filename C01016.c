#include <stdio.h> 

int main(){
   long long n;
   scanf("%lld",  &n);
   long long tich = n;
   for (int i = 1; i <= 10; i++) {
      tich = n * i;
      printf("%lld ", tich);   
   }
   return 0;
}
