#include <stdio.h> 
int palindrome(int n) {
   int rev = 0, temp = n;
   while (temp != 0) {
      rev = rev * 10 + temp % 10;
      temp /= 10;
   }
   if(rev == n) return 1;
   return 0;
}
int check6(int n) {
   while (n != 0) {
      if (n % 10 == 6) return 1; 
      n /= 10;
   }
   return 0;
}
int last8(int n) {
   int sum = 0;
   while (n != 0) {
      sum += n % 10;
      n /= 10;
   }
   if(sum % 10 == 8) return 1;
   return 0;
}
int main() {
   int a, b;
   scanf("%d%d", &a, &b);
   if(a > b) {
      int temp = a;
      a = b; 
      b = temp;
   }
   for(int i = a; i <= b; i++) {
      if(palindrome(i) && check6(i) && last8(i)) printf("%d ", i);
   }
   return 0;
}