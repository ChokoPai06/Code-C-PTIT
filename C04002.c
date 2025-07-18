#include <stdio.h> 
#include <math.h>
int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
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
        for(int i = 0; i < n; i++){
            if(prime(mx[i])){
                printf("%d ", mx[i]);
            }
        }
        printf("\n");
    }
    return 0;
}