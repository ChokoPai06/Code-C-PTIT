#include <stdio.h> 
int check(int a){
    if(a < 10) return 0;
    int last = a % 10;
    a /= 10;
    while(a > 0){
        int current = a % 10;
        if(current <= last) return 0;
        last = current;
        a /= 10;
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
            if(check(i)) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}