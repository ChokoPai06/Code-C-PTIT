#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int hihi = 1;
        while(n != 0){
            int check = n % 10;
            if(check % 2 == 0) {
                n /= 10;
            } else {
                hihi = 0;
                break;
            }
        }
        if(hihi){
            printf("YES\n");
        } else printf("NO\n");
        
    }
    return 0;
}