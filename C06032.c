#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

char temp1[210], temp2[210];

int cmp(const void *a, const void *b) {
   const char *s1 = (const char *)a;
   const char *s2 = (const char *)b;
   strcpy(temp1, s1);
   strcat(temp1, s2);
   strcpy(temp2, s2);
   strcat(temp2, s1);
   return strcmp(temp1, temp2);
}

int main() {
int t;
scanf("%d", &t);
while(t--) {
   int m;
   scanf("%d", &m);
   char s[m][105];
   for (int i = 0; i < m; i++) {
      scanf("%s", s[i]);
   }
   qsort(s, m, sizeof(s[0]), cmp);
   for (int i = 0; i < m; i++) {
   }
   for (int i = 0; i < m; i++) {
      printf("%s", s[i]);
   }
   printf("\n");
}
return 0;
}