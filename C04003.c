#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int mx[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &mx[i]);
        }
        int check = 1;
        for(int i = 0; i < n / 2; i++){
            if(mx[i] != mx[n - i - 1]){
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