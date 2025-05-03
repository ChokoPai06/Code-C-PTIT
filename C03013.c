#include <stdio.h> 

int main(){
    long long n;
    scanf("%lld", &n);
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for(int i = 0; i < n; i++){
        printf("%lld ", fib[i]);
    }
    return 0;
}