#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        int sum = 0;
        int check = i;
        while(check != 0) {
            int gt = check % 10;
            int tichgt = 1;
            for(int j = 1; j <= gt; j++){
                tichgt *= j;
            }
            sum += tichgt;
            check /= 10;
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}