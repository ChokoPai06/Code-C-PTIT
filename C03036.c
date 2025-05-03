#include <stdio.h> 
#include <string.h>

int palindrome(char num[]){
    int length = strlen(num);
    for (int j = 0; j < length / 2; j++){
        if(num[j] != num[length - j - 1]) {
            return 0;
        }
    }   
    return 1;
}
long long checkle(long long n){
    while(n != 0){
        int last = n % 10;
        if(last % 2 == 0) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
long long sum(long long n) {
    int sum = 0;
    while(n != 0){
        int last = n % 10;
        sum += last;
        n /= 10;
    }
    if(sum % 2 == 0) return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        char num[20];
        sprintf(num, "%lld", n);
        if(palindrome(num) && checkle(n) && sum(n)) {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}