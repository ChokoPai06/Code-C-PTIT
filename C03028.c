#include <stdio.h>
int gtri(int n, int k) {
    if(k == 0 || k == n) {
        return 1;
    }
    return gtri(n - 1, k - 1) + gtri(n - 1, k);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", gtri(i, j));
        }
        printf("\n");
    }
    return 0;
}