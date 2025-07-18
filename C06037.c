#include <stdio.h> 
#include <string.h>

int main() {
   char s[55];
   gets(s);
   int pos[26][2];
   int cnt [26] = {0};
   for (int i = 0; i < 52; i++) {
      int idx = s[i] - 'A';
      pos[idx][cnt[idx]++] = i;
   }
   int ans = 0;
   for (int i = 0; i < 26; i++) {
      for (int j = i + 1; j < 26; j++) {
         if ((pos[i][0] < pos[j][0] && pos[j][0] < pos[i][1]) != (pos[i][0] < pos[j][1] && pos[j][1] < pos[i][1])) {
            ans++;
         }
      }
   }
   printf("%d", ans);
   return 0;
}