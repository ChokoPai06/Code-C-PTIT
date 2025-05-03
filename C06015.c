#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
   int t;
   scanf("%d\n", &t);
   while(t--) {
      char s[81];
      fgets(s, sizeof(s), stdin);
      s[strcspn(s, "\n")] = '\0';
      for (int i = 0; i < strlen(s); i++) {
         s[i] = tolower(s[i]);
      }
      char *token = strtok(s, " ");
      char a[100][100];
      int n = 0;
      while (token != NULL) {
         strcpy(a[n++], token);
         token = strtok(NULL, " ");
      }
      int cnt = n - 2;
      for (int i = 1; i < n; i++) {
         a[i][0] = toupper(a[i][0]);
         printf("%s", a[i]);
         if (cnt) {
            printf(" ");
            cnt--;
         }
      }
      for (int i = 0; i < strlen(a[0]); i++) {
         a[0][i] = toupper(a[0][i]);
      }
      printf(", %s", a[0]);
      printf("\n");
   }  
   return 0;
}