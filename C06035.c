#include <stdio.h> 
#include <string.h>

int checktn(char s[]) {
   for (int i = 0; i < strlen(s) / 2; i++) {
      if (s[i] != s[strlen(s) - i - 1]) return 0;
   }
   return 1;
}
int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char s[21];
      scanf("%s", s);
      int check = 0;
      if (checktn(s) && strlen(s) % 2 == 1) {
         printf("YES\n");
         continue;
      }
      for (int i = 0; i < strlen(s) / 2; i++) {
         if (s[i] != s[strlen(s) - i - 1]) check++;
      }
      if (check == 1) {
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}