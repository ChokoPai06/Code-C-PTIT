#include <stdio.h> 
#include <math.h>

int pr[2000005] = {0};

void sieve() {
  for (int i = 0; i < 2000005; i++) {
    pr[i] = i;
  }
  for (int i = 2; i <= sqrt(2000005); i++) {
    if (pr[i] == i) {
      for (int j = i * i; j < 2000005; j += i) {
        pr[j] = i;
      }
    }
  }
}

int main() {
  sieve();
  int n;
  scanf("%d", &n);
  long long a[n];
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (a[i] <= 1) continue;
    while (a[i] > 1) {
      ans += pr[a[i]];
      a[i] /= pr[a[i]];
    }
  }
  printf("%lld", ans);
  return 0;
}