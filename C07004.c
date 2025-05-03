#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void rutGon(int *tu, int *mau) {
    int ucln = gcd(*tu, *mau);
    *tu /= ucln;
    *mau /= ucln;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        rutGon(&a, &b);
        rutGon(&c, &d);
        int mc = lcm(b, d);
        int tu1 = a * (mc / b);
        int tu2 = c * (mc / d);
        int mau = mc;
        printf("Case #%d:\n", i);
        printf("%d/%d %d/%d\n", tu1, mau, tu2, mau);
        int tongTu = tu1 + tu2;
        int tongMau = mau;
        rutGon(&tongTu, &tongMau);
        printf("%d/%d\n", tongTu, tongMau);
        int thuongTu = a * d;
        int thuongMau = b * c;
        rutGon(&thuongTu, &thuongMau);
        printf("%d/%d\n", thuongTu, thuongMau);
    }
    return 0;
}