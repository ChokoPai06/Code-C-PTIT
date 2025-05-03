#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
        int n, m;
        scanf("%d%d", &n, &m);
        int mx[n][m], cv[n - 1][m - 1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &mx[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cv[i][j] = mx[i +1][j + 1];
            }
        }
        printf("Test %d:\n", k);
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < m - 1; j++){
                printf("%d ", cv[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}