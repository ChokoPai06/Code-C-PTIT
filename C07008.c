#include <stdio.h> 
#include <string.h>

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      char s1[500], s2[500];
      scanf("\n");
      gets(s1);
      scanf("\n");
      gets(s2);
      char dt1[500][100];
      int n1 = 0;
      char dt2[500][100];
      int n2 = 0;
      char *tok = strtok(s1, " +");
      while (tok != NULL) {
         strcpy(dt1[n1++], tok);
         tok = strtok(NULL, " +");
      }
      char *tok2 = strtok(s2, " +");
      while (tok2 != NULL) {
         strcpy(dt2[n2++], tok2);
         tok2 = strtok(NULL, " +");
      }
      
   }
   return 0;
}