#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
   char c[1005];
   fgets(c, sizeof(c), stdin);
   c[strcspn(c, "\n")] = '\0';
   for (int i = 0; i < c[i]; i++) {
      c[i] = tolower(c[i]);
   }
   char a[100][100];
   int n = 0;
   char *token = strtok(c, " ");
   while (token != NULL) {
      strcpy(a[n++], token);
      token = strtok(NULL, " ");
   }
   int b[100] = {0};
   for (int i = 0; i < n; i++) {
      if (b[i] == 0) {
         int cnt = 1;
         for (int j = i + 1; j < n; j++) {
            if (strcmp(a[i], a[j]) == 0) {
               cnt++;
               b[j] = 1;
            }
         }
         printf("%s %d\n", a[i], cnt); 
      }
   }
   return 0;
}