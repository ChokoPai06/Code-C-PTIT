#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        int an[n], am[m];
        for(int i = 0; i < n; i++){
            scanf("%d", &an[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d", &am[i]);
        }
        printf("Test %d:\n\n", i);
        for (int i = 0; i < n + m; i++) {
            if (i < p) {
                printf("%d ", an[i]);
            } else if (i < p + m) {
                printf("%d ", am[i - p]);
            } else {
                printf("%d ", an[i - m]);
            }
        }
        printf("\n");
    }
    return 0;
}