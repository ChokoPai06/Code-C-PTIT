#include <stdio.h> 
#include <string.h>

int main(){
   char s[200];
   fgets(s, sizeof(s), stdin);
   s[strcspn(s, "\n")] = 0;
   int chu = 0, so = 0, ktu = 0;
   for(int i = 0;  i < strlen(s); i++){
      if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
         chu++;
      } else if(s[i] >= '0' && s[i] <= '9') {
         so++;
      } else ktu++;
   }
   printf("%d %d %d", chu, so, ktu);
   return 0;
}
