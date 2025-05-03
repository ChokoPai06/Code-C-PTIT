#include <stdio.h> 

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int sqrtN = (int)sqrt(n);
      if(sqrtN * sqrtN == n) {
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}
