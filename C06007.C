#include <stdio.h> 
#include <string.h>
void rmv(char *s, const char *word){
   char res[200] = "";
   char *tok = strtok(s, " ");
   while(tok != NULL){
      if(strcmp(tok, word) != 0) {
         strcat(res, tok);
         strcat(res, " ");
      }
      tok = strtok(NULL, " ");
   }
   strcpy(s, res);
}
int main(){
   char s[200], sc[200];
   fgets(s, sizeof(s), stdin);
   s[strcspn(s, "\n")] = 0;

   fgets(sc, sizeof(sc), stdin);
   sc[strcspn(sc, "\n")] = 0;
   
   rmv(s, sc);
   printf("%s", s);
   return 0;
}
