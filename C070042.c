#include <stdio.h> 

long long gcd(long long a, long long b) {
   while (b != 0) {
      long long temp = a % b;
      a = b;
      b = temp;
   }
   return a;
}

int main() {
   long long a, b;
   scanf("%lld%lld",&a ,&b);
   printf("%lld/%lld",a / gcd(a, b), b / gcd(a, b));
   return 0;
}