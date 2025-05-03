#include <stdio.h> 
#include <string.h>

void remzero(char num[]){
   int i = 0;
   while(num[i] == '0'){
      i++;
   }
   if(num[i] == '\0'){
      strcpy(num, "0");
   } else memmove(num, num + i, strlen(num) - i + 1);
}
void xuli(char num1[], char num2[], char res[]){
   int len1 = strlen(num1);
   int len2 = strlen(num2);
   int carry = 0;
   int i = 0;
   char temp[202];
   while(len1 > 0 || len2 > 0 || carry){
      int sum = carry;
      if(len1 > 0) sum += num1[--len1] - '0';
      if(len2 > 0) sum += num2[--len2] - '0';
      temp[i++] = (sum % 10) + '0';
      carry = sum / 10;
   }
   temp[i] = '\0';
   int n = strlen(temp);
   for(int j = 0; j < n; j++){
      res[j] = temp[n - 1 - j];
   }
   res[n] = '\0';
}
void tachvacong(char num[]){
   while(strlen(num) > 1){
      int mid = strlen(num) / 2;
      char fi_half[101], se_half[101], sum[202];
      strncpy(fi_half, num, mid);
      fi_half[mid] = '\0';
      strcpy(se_half, num + mid);
      xuli(fi_half, se_half, sum);
      printf("%s\n", sum);
      strcpy(num, sum);
   }
}
int main(){
   char s[201];
   scanf("%s", s);
   remzero(s);
   tachvacong(s);
}