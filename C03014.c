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
long long lcm (long long a, long long b) {
    return a * b / gcd(a, b);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld\n", lcm(a, b), gcd(a, b)); 
    }
    return 0;
}