#include <stdio.h> 
#include <math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 20; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for(int i = a; i <= b; i++){
        if(i < 2) continue;
        int prime = 1;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime){
            int checkfib = 0;
            int temp = i;
            while(temp != 0) {
                checkfib += temp % 10;
                temp /= 10;
            }
            for(int l = 0; l <= 20; l++){
                if(checkfib == fib[l]){
                    printf("%d ", i);
                    break;
                } 
            }
        }
    }
    return 0;
}