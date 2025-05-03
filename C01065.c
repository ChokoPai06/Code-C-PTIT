#include <stdio.h> 
#include <math.h>
int check(int n) {
   if(n < 2) return 0;
   for(int i = 2; i <= sqrt(n); i++) {
      if(n % i == 0) return 0;
   }
   return 1;
}
int main() {
   int n;
   scanf("%d", &n);
   int mx[100][2];
   int cnt = 0;
   while(n != 0) {
      int last = n % 10;
      if(check(last)) {
         int fnd = 0;
         for(int i = 0; i < cnt; i++){
            if(mx[i][0] == last){
               mx[i][1]++;
               fnd = 1;
               break;
            }
         }
         if(!fnd) {
            mx[cnt][0] = last;
            mx[cnt][1]++;
            cnt++;
         }
      }
      n /= 10;
   }
   for(int i = cnt - 1; i >= 0; i--) {
      printf("%d %d\n", mx[i][0], mx[i][1]);
   }
   return 0;
}