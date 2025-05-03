#include <stdio.h> 

int main(){
   int n;
   scanf("%d", &n);
   long long a[n];
   for(int i = 0; i < n; i++){
      scanf("%lld", &a[i]);
   }
   double sum = 0;
   for(int i = 0; i < n; i++){
      sum += a[i];
   }
   double average = sum / n;
   printf("%.3lf", average);
   return 0;
}