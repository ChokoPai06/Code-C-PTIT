#include <stdio.h> 
#include <string.h>
#include <math.h>

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    long long n;
    scanf("%lld", &n);
    char s[20];
    sprintf(s, "%lld", n);
    if (strlen(s) % 2 == 1) {
      printf("INVALID\n");
      continue;
    }
    int k = strlen(s) / 2;
    long long l = n / (int)pow(10, k), r = n % (int)pow(10, k);
    printf("%lld\n", gcd(l, r));
  }
  return 0;
}