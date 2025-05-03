#include <stdio.h> 
int main(){
    int n;
    scanf("%d", &n);
    int degree[100005];
    if(n == 1) {
        printf("Yes\n");
        return 0;
    }
    for(int i = 0; i < n - 1; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        degree[a]++;
        degree[b]++;
    }
    for(int i = 1; i < n; i++){
        if(degree[i] == n - 1){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}