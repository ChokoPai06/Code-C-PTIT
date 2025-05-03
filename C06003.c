#include <stdio.h> 
#include <string.h>
int main(){
   int t;
   scanf("%d", &t);
   getchar();
   while(t--) {
      char s[200];
      fgets(s, sizeof(s), stdin);
      s[strcspn(s, "\n")] = 0;
      int cnt = 0;
      char *tok = strtok(s, " ");
      while(tok != NULL){
         cnt++;
         tok = strtok(NULL, " ");
      }
      printf("%d\n", cnt);
   }
    return 0;
}