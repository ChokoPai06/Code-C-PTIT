#include <stdio.h> 

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      int n, m;
      scanf("%d%d", &n, &m);
      while(m != 0) {
         int r = n % m;
         n = m;
         m = r;
      }
      printf("%d\n", n);
   }
   return 0;
}
