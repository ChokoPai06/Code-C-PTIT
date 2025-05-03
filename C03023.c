#include <stdio.h> 
int palindrome(int n) {
   int rev = 0, temp = n;
   while (temp != 0) {
      rev = rev * 10 + temp % 10;
      temp /= 10;
   } 
   if (rev == n) {
      return 1;
   } else return 0;
}
int check9(int n) {
   while(n != 0) {
      if(n % 10 == 9) return 0;
      n /= 10;
   }
   return 1;
}
int main() {
   int n;
   scanf("%d", &n);
   int cnt = 0;
   for (int i = 2; i < n; i++) {
      if (palindrome(i) && check9(i)) {
         printf("%d ", i);
         cnt++;
      }
   }
   printf("\n%d", cnt);
   return 0;
}