#include <stdio.h> 
#include <string.h>

int main() {
   int t;
   scanf("%d\n", &t);
   while(t--) {
      char s[1005];
      fgets(s, sizeof(s), stdin);
      s[strcspn(s, "\n")] = '\0';
      int check1 = 1;
      if (s[0] == '0') check1 = 0;
      for (int i = 0; i < strlen(s); i++) {
         if (s[i] < '0' || s[i] > '9') {
            check1 = 0;
            break;
         }
      }
      if (!check1) {
         printf("INVALID\n");
         continue;
      }
      int cnt[10] = {0};
      for (int i = 0; i < strlen(s); i++) {
         cnt[s[i] - '0'] = 1;
      }
      int check = 1;
      for (int i = 0; i < 10; i++) {
         if (cnt[i] == 0) {
            check = 0;
            break;
         }
      }
      if (check) printf("YES\n");
      else printf("NO\n");
   }
   return 0;
}