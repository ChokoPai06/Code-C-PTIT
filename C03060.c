#include <stdio.h> 
int cnt(int n){
    int cnt = 0;
    while(n > 0){
        cnt += n / 2;
        n /= 2;
    }
    return cnt;
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    if(cnt(n) >= k) {
        printf("Yes\n");
    } else printf("No\n");
    return 0;
}