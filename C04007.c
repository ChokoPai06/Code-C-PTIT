#include <stdio.h> 

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int an[n], am[m];
    int thutu;
    for(int i = 0; i < n; i++){
        scanf("%d", &an[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &am[i]);
    }
    scanf("%d", &thutu);
    for (int i = 0; i < n + m; i++) {
        if (i < thutu) {
            printf("%d ", an[i]);
        } else if (i < thutu + m) {
            printf("%d ", am[i - thutu]);
        } else {
            printf("%d ", an[i - m]);
        }
    }

    return 0;
}