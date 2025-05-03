#include <stdio.h> 
#include <math.h>
int prime(int n) {
    if(n < 2) return 0;
    for(int j = 2; j <= sqrt(n); j++){
        if(n % j == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(!prime(i)) continue;
            int check2 = i, lasnt = 1;
            while(check2 != 0) {
                int pt = check2 % 10;
                if(!prime(pt)){
                    lasnt = 0;
                    break;
                }
                check2 /= 10;
            }
            if(lasnt) cnt++;
        }
        printf("%d\n", cnt);

    }
    return 0;
}