#include <stdio.h> 
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int a, b;
      scanf("%d%d", &a, &b);
      long long fib[93];
      fib[0] = 0;
      fib[1] = 1;
      for(int i = 2; i < 93; i++){
         fib[i] = fib[i - 1] + fib[i - 2];
      }
      for(int i = a; i <= b; i++){
         printf("%lld ", fib[i]);
      }
      printf("\n");
   }
   return 0;
}