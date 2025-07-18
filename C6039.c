#include <stdio.h> 
#include <string.h>

int rotatable(const char *a, const char *b) {
  char temp[150];
  strcpy(temp, b);
  strcat(temp, b);
  return strstr(temp, a) != NULL;
}

int main() {
  int n;
  scanf("%d", &n);
  scanf("\n");
  char s[n][55];
  for (int i = 0; i < n; i++) {
    gets(s[i]);
    scanf("\n");
  }
  int ans = (int)1e9;
  for (int i = 0; i < n; i++) {
    int tmp = 0;
    for (int j = 0; j < n; j++) {
      if (j == i) {
        continue;
      }
      if (!rotatable(s[i], s[j])) {
        printf("-1");
        return 0;
      }
      char temp[55];
      strcpy(temp, s[j]);
      while (strcmp(s[i], temp) != 0) {
        char c = temp[0];
        for (int k = 0; k < strlen(temp) - 1; k++) {
          temp[k] = temp[k + 1];
        }
        temp[strlen(temp) - 1] = c;
        tmp++;
      }
    }
    if (tmp < ans) {
      ans = tmp;
    }
  }
  printf("%d", ans);
  return 0;
}