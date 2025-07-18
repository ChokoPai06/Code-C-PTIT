#include <stdio.h> 
#include <string.h>

int main() {
   char s[10005];
   char res[1005][1005];
   int n = 0, len = 0;
   int cnt[1005] = {0};
   while (scanf("%s", s) == 1) {
      if (strlen(s) > len) {
         len = strlen(s);
         n = 0;
         strcpy(res[n], s);
         cnt[n++] = 1;
      } else if (strlen(s) == len) {
         int check = 0;
         for (int i = 0; i < n; i++) { 
            if (strcmp(s, res[i]) == 0) {
               check = 1;
               cnt[i]++;
               break;
            }
         }
         if (!check) {
            strcpy(res[n], s);
            cnt[n++] = 1;
         }
      }
   }
   for (int i = 0; i < n; i++) {
      printf("%s %d %d\n", res[i], len, cnt[i]);
   }
   return 0;
}