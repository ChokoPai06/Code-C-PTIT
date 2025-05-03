#include <stdio.h> 
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 6; i < t; i++){
        int sum = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                sum += j;
                if(j != sqrt(i)) {
                    sum += i / j;
                }
            }
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}