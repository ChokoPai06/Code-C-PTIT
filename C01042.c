#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    long long sum = 0;
    long long gt = 1;

    for(int i = 1; i <= n ; i++) {
        gt *= i;
        sum += gt;
    }
    printf("%lld", sum);
    return 0;
}