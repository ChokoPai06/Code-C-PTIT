#include <stdio.h> 

int main(){
    long long n;
    scanf("%d", &n);
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 92; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int check = 0;
    for(int i = 0; i <= 92; i++){
        if(fib[i] == n) {
            check = 1;
            break;
        }
    }
    if(check) {
        printf("1");
    } else printf("0");
    return 0;
}