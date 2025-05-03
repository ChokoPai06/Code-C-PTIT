#include <stdio.h> 
#include <math.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[100];
   int cnt = 0;
   for(int i = 2; i <= sqrt(n); i++){
      while(n % i == 0){
         a[cnt++] = i;
         n /= i;
      }
   }
   if(n > 1) a[cnt++] = n;
   int check = cnt;
   for(int i = 0; i < cnt; i++){
      printf("%d", a[i]);
      if(check > 1) {
         printf("x");
         check--;
      }
   }
   return 0;
}