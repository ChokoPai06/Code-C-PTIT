#include <stdio.h> 
#include<string.h>

int main(){
    char c[9];
    scanf("%s", c);
    printf("%c %c", c[0],c[strlen(c) - 1]);
    return 0;
}