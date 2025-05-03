#include <stdio.h> 
#include <string.h>

int dk1(char s[]) {
   if (s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11]) return 1;
   else return 0;
}

int dk2(char s[]) {
   if (s[6] == s[7] && s[7] == s[8] && s[8] == s[10] && s[10] == s[11]) return 1;
   else return 0;
}

int dk3(char s[]) {
   if ((s[6] == s[7]  && s[7] == s[8]) && (s[10] == s[11])) return 1;
   else return 0;
}

int dk4(char s[]) {
   if ((s[6] == '8' || s[6] == '6') && (s[7] == '8' || s[7] == '6') && (s[8] == '8' || s[8] == '6') && 
   (s[10] == '8' || s[10] == '6') && (s[11] == '8' || s[11] == '6')) return 1;
   else return 0;
}

int main() {
   int t;
   scanf("%d\n", &t);
   while(t--) {
      char s[20];
      fgets(s, sizeof(s), stdin);
      if (dk1(s) || dk2(s) || dk3(s) || dk4(s)) printf("YES\n");
      else printf("NO\n");
   }
   return 0;
}