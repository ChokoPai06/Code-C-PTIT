#include <stdio.h> 
#include <string.h>
int check(char s[]){
   if(s[0] == '0') return 0;
   for(int i = 0; i < strlen(s); i++){
      if(s[i] < '0' || s[i] > '9') return 0;
   }
   return 1;
}
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      char s[1005];
      scanf("%s", s);
      if(!check(s)) {
         printf("INVALID\n");
      } else {
         int chan = 0, le = 0;
         for(int i = 0; i < strlen(s); i++){
            if((s[i] - '0') % 2 == 0){
               chan++;
            } else le++;
         }
         if(chan > le && strlen(s) % 2 == 0){
            printf("YES\n");
         } else if(le > chan && strlen(s) % 2 != 0){
            printf("YES\n");
         } else if(chan == le) {
            printf("NO\n");
         } else printf("NO\n");
      }
   }
   return 0;
}