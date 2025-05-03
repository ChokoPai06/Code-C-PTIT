#include <stdio.h> 

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int mx[n][m], cv[m][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mx[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cv[j][i] = mx[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", cv[i][j]);
        }
        printf("\n");
    }
    return 0;
}