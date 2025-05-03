#include <stdio.h> 

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      double res = 1.0 / n;
      printf("%.15f\n", res);
   }
   return 0;
}
