#include <stdio.h> 
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  scanf("\n");
  while(t--) {
    char s[50];
    gets(s);
    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
      int value = 0;
      if (s[i] == 'I') value = 1;
      if (s[i] == 'V') value = 5;
      if (s[i] == 'X') value = 10;
      if (s[i] == 'L') value = 50;
      if (s[i] == 'C') value = 100;
      if (s[i] == 'D') value = 500;
      if (s[i] == 'M') value = 1000;
      ans += value;
    }
    for (int i = 0; i < strlen(s) - 1; i++) {
      if (s[i] == 'I' && s[i + 1] == 'V' || s[i] == 'I' && s[i + 1] == 'X') {
        ans -= 2;
      }
      if (s[i] == 'X' && s[i + 1] == 'L' || s[i] == 'X' && s[i + 1] == 'C') {
        ans -= 20;
      }
      if (s[i] == 'C' && s[i + 1] == 'D' || s[i] == 'C' && s[i + 1] == 'M') {
        ans -= 200;
      }
    }
    printf("%d\n", ans);
  } 
  return 0;
}