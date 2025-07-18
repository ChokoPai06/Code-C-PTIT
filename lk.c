#include <stdio.h> 
#include <string.h>

int main() {
  char s[1005];
  scanf("%s", s);
  if (strlen(s) % 2 == 0) { 
    int a[102] = {0};
    for (int i = 0; i < strlen(s); i += 2) {
      int tmp = (s[i] - '0') * 10 + (s[i + 1] - '0');
      if (a[tmp] == 0) {
        a[tmp] = 1;
      }
    }
    for (int i = 0; i < 102; i++) {
      if (a[i] == 1){ 
        printf("%d ", i);
      }
    }
  }  
  if (strlen(s) % 2 == 1) { 
    int a[102] = {0};
    for (int i = 0; i < strlen(s) - 1; i += 2) {
      int tmp = (s[i] - '0') * 10 + (s[i + 1] - '0');
      if (a[tmp] == 0) {
        a[tmp] = 1;
      }
    }
    for (int i = 0; i < 102; i++) {
      if (a[i] == 1){ 
        printf("%d ", i);
      }
    }
  }  
  return 0;
}