#include <stdio.h> 
#include <string.h>
int main(){
    char s[9];
    scanf("%s", s);
    int len = strlen(s);
    if (len > 1) {
        char temp;
        temp = s[0];
        s[0] = s[len - 1];
        s[len - 1] = temp;
    }
    int i = 0; 
    while (s[i] == '0'){
        i++;
    }

    printf("%s", s + i);
    return 0;
}
