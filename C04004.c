#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        long long fib[100];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2; i <= 92; i++){
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("%lld\n", fib[n]);
    }
    return 0;
}