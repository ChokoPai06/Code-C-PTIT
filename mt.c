#include <stdio.h> 
#include <math.h>

int cp(int a) {
  if ((int)sqrt(a) * sqrt(a) != a) {
    return 0;
  }
  return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  int k = 1;
  int md = (int)pow(10, k);
  int tmp = n % md;
  int exist = 0;
  while (md <= n * 10) {
    tmp = n % md;
    if (cp(tmp)) {
      printf("%d\n", tmp);
      exist = 1;
    }
    k++;
    md = (int)pow(10, k);
  }
  // if (cp(n)) {
  //   printf("%d\n", n);
  // }
  if (!exist) {
    printf("NO\n");
  }
  return 0;
}