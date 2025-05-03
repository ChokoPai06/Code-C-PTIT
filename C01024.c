#include <stdio.h> 

int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      char s[9];
      scanf("%s", s);
      if (s[0] == s[strlen(s) - 1]) {
         printf("YES\n"); 
      } else printf("NO\n");
   }
   return 0;
}
