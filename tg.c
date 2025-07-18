#include <stdio.h> 
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    char s[100];
    scanf("%s", s);
    if (strlen(s) < 3) {
      printf("NO\n");
      continue;
    }
    int init = 0;
    for (int i = 0; i < strlen(s); i++) {
      if (s[i] > s[init]) {
        init = i;
      }
    }
    int dk = 1;
    for (int i = 0; i < init; i++) {
      if (s[i] >= s[i + 1]) {
        dk = 0;
        break;
      }
    }
    if (dk) {
      for (int i = init; i < strlen(s) - 1; i++) {
        if (s[i] <= s[i + 1]) {
          dk = 0;
          break;
        }
      }
    }
    if (dk) {
      printf("YES\n");
    } else printf("NO\n");
  }
  return 0;
}