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
    char n1[501], n2[501];
    scanf("%s%s", n1, n2);
    if (strlen(n1) < strlen(n2)) {
      char temp[501];
      strcpy(temp, n1);
      strcpy(n1, n2);
      strcpy(n2, temp);
    }
    int s1[501] = {0}, s2[501]= {0}, res[505] = {0};
    reversed(n1), reversed(n2);
    for (int i = 0; i < strlen(n1); i++) {
      s1[i] = n1[i] - '0';
      if (i < strlen(n2)) {
        s2[i] = n2[i] - '0';
      }
    } 
    int carry = 0, n = 0;
    for (int i = 0; i < strlen(n1); i++) {
      int cur = s1[i] + s2[i] + carry;
      res[n++] = cur % 10;
      carry = cur / 10;
    }
    if (carry > 0) {
      res[n++] = carry;
    }
    for (int i = n - 1; i >= 0; i--) {
      printf("%d", res[i]);
    }
      printf("\n");
    }
  return 0;
}