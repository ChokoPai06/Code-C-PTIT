#include <stdio.h> 

int main() {
   char s[1000], stack[1000];
   scanf("%s", s);
   int top = 0;
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
         stack[top++] = s[i];
      } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
         if (top == 0) {
            printf("0\n");
            return 0;
         }
         char last = stack[--top];
         if (!((last == '(' && s[i] == ')') || (last == '[' && s[i] == ']') || (last == '{' && s[i] == '}'))) {
            printf("0\n");
            return 0;
         } 
      } 
   }
   printf("%d\n", (top == 0) ? 1 : 0);
   return 0;
}