#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        char c[18];
        scanf("%s", c);
        int check = 1;
        for(int i = 0; i < strlen(c) - 1; i++){
            if(c[i] > c[i + 1]){
                check = 0;
                break;
            }
        }
        if(check) {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}