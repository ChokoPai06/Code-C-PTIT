#include <stdio.h> 
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int check = n;
    while(n != 0) {
        int a = 0;
        a = n % 10;
        int sumnho = 1;
        for (int i = 1; i <= a; i++) {
            sumnho *= i;
        }
        sum += sumnho;
        n = n / 10;
    }
    if(check == sum) {
        printf("1");
    } else printf("0");
    return 0;
}