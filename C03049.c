#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int chan = 0, le = 0;
        while(n != 0){
            int check = n % 10;
            if(check % 2 == 0) chan++;
            else le++;
            n /= 10;
        }
        if(le > chan){
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}