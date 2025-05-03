#include <stdio.h> 
#include <math.h>
int prime(long long n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
long long reversed(long long n) {
    long long reversed = 0;
    while(n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}
int main(){
    long long n;
    scanf("%lld", &n);
    int mx[20][2];
    int cnt = 0;
    long long reversedn = reversed(n);

    while(reversedn != 0){
        int last = reversedn % 10;
        if(prime(last)) {
            int found = 0;
            for(int i = 0; i < cnt; i++){
                if(mx[i][0] == last){
                    mx[i][1]++;
                    found = 1;
                    break;
                }
            }
            if(!found) {
                mx[cnt][0] = last;
                mx[cnt][1]= 1;
                cnt++;
            }
        }
        reversedn /= 10;
    }
    for(int i = 0; i < cnt; i++){
        printf("%d %d\n", mx[i][0], mx[i][1]);
    }
    return 0;
}