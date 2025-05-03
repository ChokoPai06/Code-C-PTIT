#include <stdio.h> 
#include <math.h>
int main(){
        int n;
    scanf("%d", &n);
    int tich = 1;
    while(n != 0) {
        tich *= n % 10;
        n /= 10;
    }
    printf("%d\n", tich);
    return 0;
}
