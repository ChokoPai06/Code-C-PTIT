#include <stdio.h> 
#include <string.h>

int main() {
  int n;
  while(1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    scanf("\n");
    char s1[n + 1];
    gets(s1);
    scanf("\n");
    char s2[n + 1];
    gets(s2);
    scanf("\n");
    char s[n + 1];
    gets(s);
    scanf("\n");
    char new_s[500];
    int cnt = 0;
    char t1[250], t2[250];
    strcpy(t1, s1);
    strcpy(t2, s2);
    while (cnt < n) {
      for (int i = 0; i < n * 2; i++) {
        if (i % 2 == 0) {
          new_s[i] = t2[i / 2];
        } else {
          new_s[i] = t1[i / 2];
        }
      }
      cnt++;
      if (strcmp(s, new_s) == 0) {
        printf("%d\n", cnt);
        break;
      }
      for (int i = 0; i < n * 2; i++) {
        if (i < n) {
          t1[i] = new_s[i];
        } else {
          t2[i] = new_s[i];
        }
      }
    }
    if (cnt == n) {
      printf("-1\n");
    }
  }
  return 0;
}