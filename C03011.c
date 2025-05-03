#include <stdio.h> 

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++){
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