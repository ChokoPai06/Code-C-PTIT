#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void tolow(char s[]) {
   for (int i = 0; i < strlen(s); i++) {
      s[i] = tolower(s[i]);
   }
}
int main() {
   int t;
   scanf("%d\n", &t);
   for (int tt = 1; tt <= t; tt++) {
      printf("Test %d: ", tt);
      char s1[200], s2[200];
      fgets(s1, sizeof(s1), stdin);
      s1[strcspn(s1, "\n")] = '\0';
      fgets(s2, sizeof(s2), stdin);
      s2[strcspn(s2, "\n")] = '\0';
      char *tok = strtok(s1, " ");
      char res[100][200];
      int cnt = 0;
      while (tok != NULL) {
         char temp1[200], temp2[200];
         strcpy(temp1, tok);
         strcpy(temp2, s2);
         tolow(temp1), tolow(temp2);
         if (strcmp(temp1, temp2) != 0) {
            strcpy(res[cnt++], tok);
         }
         tok = strtok(NULL, " ");
      }
      for (int i = 0; i < cnt; i++) {
         printf("%s ", res[i]);
      }
      printf("\n");
   }
   return 0;
}