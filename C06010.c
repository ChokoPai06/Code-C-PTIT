#include <stdio.h> 
#include <string.h>
int checktn(char num[]){
   for(int i = 0; i < strlen(num) / 2; i++){
      if(num[i] != num[(strlen(num) - i - 1)]) return 0;
   }
   return 1;
}
int checkchan(char num[]){
   for(int i = 0; i < strlen(num); i++){
      if((num[i] - '0') % 2 != 0) return 0;
   }
   return 1;
}
int main(){
   int t;
   scanf("%d", &t);
   while(t--) {
      char s[500];
      scanf("%s", s);
      if(checktn(s) && checkchan(s)){
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}