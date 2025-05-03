#include <stdio.h> 
#include <math.h>
   
int main(){
      int m, n;
      scanf("%d%d", &m, &n);
      int m1 = sqrt(m), n1 = sqrt(n);
      if (m1 * m1 != m) {
         m1++;
      }
      printf("%d\n", n1 - m1 + 1);
      for (int i = m1; i <= n1; i++) {
         printf("%d\n", i * i);
      }
   return 0;
}
