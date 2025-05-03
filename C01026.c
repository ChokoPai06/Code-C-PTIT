#include <stdio.h> 

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int check = 1;
      for (int i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) {
               check = 0;
               break;
         }
      }
      if(check) {
         printf("YES\n");
         } else printf("NO\n");
   }
   return 0;
}
