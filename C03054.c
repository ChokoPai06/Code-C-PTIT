#include <stdio.h>
#include <string.h> 
int check(char c[]){
    for(int i = 0; i < strlen(c); i++){
        if(c[i] == '0') c[i] = '0';
        else if(c[i] == '1') c[i] = '1';
        else if(c[i] == '8') c[i] = '0';
        else if(c[i] == '9') c[i] = '0';
        else return 0;
    }
    return 1;
}
void removezero(char s[]){
    int i = 0;
    while(s[i] == '0') i++;
    if(s[i] == '\0') {
        printf("INVALID\n");
    } else printf("%s\n", s + i);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[20];
        scanf("%s", s);
        if(check(s)) {
            removezero(s);
        } else printf("INVALID\n");
    }
    return 0;
}