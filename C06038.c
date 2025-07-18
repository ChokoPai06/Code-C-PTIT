#include <stdio.h> 
#include <string.h>

void reversed (char a[]) {
  for (int i = 0; i < strlen(a) / 2; i++) {
    char tmp = a[i];
    a[i] = a[strlen(a) - i - 1];
    a[strlen(a) - i - 1] = tmp;
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    char n1[1005], n2[1005], n3[1005];
    scanf("%s", n1);
    scanf("%s", n2);
    if (strlen(n1) < strlen(n2) || strlen(n1) == strlen(n2) && strcmp(n1, n2) < 0) {
      char temp[1005];
      strcpy(temp, n1);
      strcpy(n1, n2);
      strcpy(n2, temp);
    }
    int s1[1005] = {0}, s2[1005] = {0}, res[1005] = {0};
    reversed(n1), reversed(n2);
    for (int i = 0; i < strlen(n1); i++) {
      s1[i] = n1[i] - '0';
      if (i < strlen(n2)) {
        s2[i] = n2[i] - '0';
      }
    } 
    int carry = 0, n = 0;
    for (int i = 0; i < strlen(n1); i++) {
      int cur = s1[i] - s2[i] - carry;
      if (cur < 0) {
        res[n++] = cur + 10;
        carry = 1;
      } else {
        res[n++] = cur;
        carry = 0;
      }
    }
    while (res[n - 1] == 0) {
      n--;
    }
    for (int i = n - 1; i >= 0; i--) {
      printf("%d", res[i]);
    }
    printf("\n");
  }
  return 0;
}