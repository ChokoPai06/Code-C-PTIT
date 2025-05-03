#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int mx[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &mx[i]);
        }
        int cnt = 1;
        int max = mx[0];
        for(int i = 1; i < n; i++){
            if(max <= mx[i]) {
                cnt++;
                max = mx[i];
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}