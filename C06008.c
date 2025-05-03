#include <stdio.h> 
#include <string.h>
int main(){
   char s[200], sc[200];
   fgets(s, sizeof(s), stdin);
   s[strcspn(s, "\n")] = 0;
   char *word[100];
   int n = 0;
   char *tok = strtok(s, " ");
   while(tok != NULL){
      int found = 0;
      for(int i = 0; i < n; i++){
         if(strcmp(word[i], tok) == 0){
            found = 1;
            break;
         }
      }
      if(!found) {
         word[n++] = tok;
      }
      tok = strtok(NULL, " ");
   }
   for(int i = 0; i < n; i++){
      printf("%s ", word[i]);
   }
   return 0;
}
