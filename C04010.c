#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    int mx[t];
    int min = __INT_MAX__;
    int minnhi = __INT_MAX__;
    for(int i = 0; i < t; i++){
        scanf("%d", &mx[i]);
        if(min > mx[i]) {
            minnhi = min;
            min = mx[i];
        } else if(mx[i] < minnhi && mx[i] != min){
            minnhi = mx[i];
        }
    }
    printf("%d %d", min, minnhi);
    return 0;
}