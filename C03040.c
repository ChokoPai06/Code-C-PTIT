#include <stdio.h> 
#include <math.h>
int sumpt(int n) {
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int n; 
    scanf("%d", &n);
    int n2 = n;
    int sumnt = 0;
    int sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                sumnt += sumpt(i);
                n /= i;
            }
    }
    if(n > 1){
        sumnt += sumpt(n);
    }
    while(n2 != 0){
        sum += n2 % 10;
        n2 /= 10;
    }
    if(sum == sumnt) {
        printf("YES\n");
    } else printf("NO\n");
    return 0;
}