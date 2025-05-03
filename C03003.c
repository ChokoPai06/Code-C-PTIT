#include <stdio.h> 
#include <math.h>
int check(int num) {
    for(int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) return 0;
        }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int num = 2;
    while(n != 0){
        if(check(num)) {
            printf("%d\n", num);
            n--;
        }
        num++;
    }
    return 0;
}