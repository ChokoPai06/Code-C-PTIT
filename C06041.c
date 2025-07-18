#include <stdio.h>
#include <string.h>

int main() {
  char s[100005];
  scanf("%s", s);
  int len = strlen(s);
  char res[100005];
  int idx = 0;
  char max = 0;
  for (int i = len - 1; i >= 0; i--) {
    if (s[i] >= max) {
      max = s[i];
      res[idx++] = s[i];
    }
  }
  for (int i = idx - 1; i >= 0; i--) {
    printf("%c", res[i]);
  }
  return 0;
}