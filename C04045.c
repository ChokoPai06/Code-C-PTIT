#include <stdio.h> 

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int chan = 0, le = 0;
      int cnt = 0;
      int n;
      while (scanf("%d", &n) == 1) {
         cnt++;
         if (n % 2 == 0) chan++;
         else le++;
         if (getchar() == '\n') break;
      }
      if (cnt % 2 == 0 && chan > le) printf("YES\n");
      else if (cnt % 2 == 1 && le > chan) printf("YES\n");
      else printf("NO\n");
   }
   return 0;
}