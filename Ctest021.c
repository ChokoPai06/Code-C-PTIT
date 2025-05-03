#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
long long gcd(long long a, long long b){
   if(a == 0 || b == 0) return a + b;
   while(a != b){
      if(a > b) {
         a -= b;
      } else b -= a;
   } 
   return a;
}
long long lcm(long long a, long long b){
      return a * b / gcd(a, b);
}
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      char s[22];
      scanf("%s", s);
      if(strlen(s) % 2 != 0) {
         printf("INVALID\n");
      } else {
         int mid = strlen(s) / 2;
         char fi_half[11], se_half[11];
         strncpy(fi_half, s, mid);
         fi_half[mid] = '\0';
         strcpy(se_half, s + mid);
         long long fi = atoll(fi_half), se = atoll(se_half);
         printf("%lld\n", lcm(fi, se));
      }
   }
   return 0;
}