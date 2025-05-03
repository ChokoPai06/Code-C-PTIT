#include <stdio.h> 
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a < 6) {
        a = 6;
    }
    for(int i = a; i <= b; i++){
        int sum = 1;
        for (int j = 2; j <= sqrt(i); j++)   {
            if(i % j == 0) {
                sum += j;
                if(j != i / j) {
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