#include <stdio.h> 

int main() {
  int n;
  scanf("%d", &n);
  char s[n][55];
  for (int i = 0; i < n; i++) {
    gets(s[i]);
    scanf("\n");
  }
  return 0;
}