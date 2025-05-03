#include <stdio.h> 
#include <string.h>

int checktn(const char* a) {
   for (int i = 0; i < strlen(a) / 2; i++) {
      if (a[i] != a[strlen(a) - 1 - i]) return 0;
   }
   return 1;
}

struct word {
   char w[100];
   int cnt;
};

int main() {
   char s[10001];
   struct word res[10000];
   int total = 0, len = 0;
   while(gets(s)) {
      char *tok = strtok(s, " ");
      while (tok != NULL) {
         if (checktn(tok) && (strlen(tok) >= len)) {
            int fnd = 0;
            for (int i = 0; i < total; i++) {
               if (strcmp(res[i].w, tok) == 0) {
                  res[i].cnt++;
                  fnd = 1;
                  break;
               }
            }
            if (!fnd) {
               len = strlen(tok);
               strcpy(res[total].w, tok);
               res[total].cnt = 1;
               total++;
            }
         }
         tok = strtok(NULL, " ");
      }
   }
   for (int i = 0; i < total; i++) {
      if (strlen(res[i].w) == len) {
         printf("%s %d\n", res[i].w, res[i].cnt);  
      }
   }
   return 0;
}