#include <stdio.h> 
int gcd(int a, int b) {
    if(a == 0 || b ==0) {
        return a + b;
    }
    while(a != b) {
        if(a > b) {
            a = a - b;
        } else b = b - a;
    }
    return a;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(gcd(a, b) == gcd(c, d)) {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}