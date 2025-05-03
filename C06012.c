#include <stdio.h> 
#include <string.h>
#include <math.h>
int checkpr(char num[]){
   for(int i = 0; i < strlen(num); i++){
      for(int j = 2; j <= sqrt(num[i] - '0'); j++)
      if((num[i] - '0') % j == 0) return 0;
   }
   return 1;
}
int checktn(char num[]){
   for(int i = 0; i < strlen(num) / 2; i++){
      if(num[i] != num[(strlen(num) - i - 1)]) return 0;
   }
   return 1;
}
int checkdk2(char num[]){
   int sum = 0;
   if(num[0] - '0'== 8 && num[strlen(num) - 1] - '0' == 8){
      for(int i = 0; i < strlen(num); i++){
         sum += (num[i] - '0');
      }
      if(sum % 10 == 0) return 1;
   }
   return 0;
}
int main(){
   int t;   
   scanf("%d", &t);
   while(t--) {
      char s[500];
      scanf("%s", s);
      if(checktn(s) && checkpr(s)){
         printf("YES\n");
      } else printf("NO\n");
   }
   return 0;
}