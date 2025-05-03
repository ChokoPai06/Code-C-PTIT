#include <stdio.h> 

int gcd(int a, int b) {
    if(a == 0 || b == 0) {
        return a + b;
    }
    while(a != b) {
        if(a > b) {
            a = a - b;
        } else b = b - a;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a*b/gcd(a, b);
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%lld\n", gcd(n, m));
    printf("%lld", lcm(n, m));
    return 0;
}