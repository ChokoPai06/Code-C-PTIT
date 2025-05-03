#include <stdio.h> 

int main(){
   int n;
   scanf("%d", &n);
   int init = 0;
   int binary[32];
   if(n == 0){
      printf("0");
      return 0;
   }
   while(n > 0) {
      binary[init] = n % 2;
      n /= 2;
      init++;
   }
   for(int i = init - 1; i >= 0; i--){
      printf("%d", binary[i]);
   }
   return 0;
}