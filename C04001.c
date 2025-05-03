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
        for(int i = 0; i < n; i++){
            if(mx[i] % 2 == 0){
                printf("%d ", mx[i]);
            }
        }
        printf("\n");
    }
    return 0;
}