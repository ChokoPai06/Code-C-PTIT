#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
   return strcmp((const char *)a, (const char *)b);
}

int exists(char arr[][100], int n, char *word) {
   for (int i = 0; i    < n; i++) {
      if (strcmp(arr[i], word) == 0) return 1;
   }
   return 0;
}

int main() {
   int t;
   scanf("%d\n", &t);
   while (t--) {
      char s1[205], s2[205];
      fgets(s1, sizeof(s1), stdin);
      s1[strcspn(s1, "\n")] = '\0';
      fgets(s2, sizeof(s2), stdin);
      s2[strcspn(s2, "\n")] = '\0';
      char words1[100][205], words2[100][100], res[100][100];
      int n1 = 0, n2 = 0, cnt = 0;
      char *tok = strtok(s1, " ");
      while (tok != NULL) {
         if (!exists(words1, n1, tok)) {
            strcpy(words1[n1++], tok);
         }
         tok = strtok(NULL, " ");
      }
      tok = strtok(s2, " ");
      while (tok != NULL) {
         if (!exists(words2, n2, tok)) {
            strcpy(words2[n2++], tok);
         }
         tok = strtok(NULL, " ");
      }
      for (int i = 0; i < n1; i++) {
         if (!exists(words2, n2, words1[i])) {
            if (!exists(res, cnt, words1[i])) {
               strcpy(res[cnt++], words1[i]);
            }
         }
      }
      qsort(res, cnt, sizeof(res[0]), cmp);
      for (int i = 0; i < cnt; i++) {
         printf("%s ", res[i]);
      }
      printf("\n");
   }
   return 0;
}