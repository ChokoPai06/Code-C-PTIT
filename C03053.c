#include <stdio.h>
#include <math.h> 
int nt[100005];
void sieve(){
    for(int i = 0; i <= 10000; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for(int i = 2; i <= sqrt(10000); i++){
        if(nt[i]){
            for(int j = i * i; j <= 10000; j += i){
                nt[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = 2; i <= n / 2; i++){
            if(nt[i] && nt[n - i]) {
                printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
    }
    return 0;
}