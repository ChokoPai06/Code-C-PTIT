#include <stdio.h> 
#include <string.h>
#include <math.h>
int checktn(char num[]) {

    for(int i = 0; i < (strlen(num)) / 2; i++) {
        if(num[i] != num[strlen(num) - i - 1]) return 0;
    }
    return 1;
}
int check4(int n){
    while(n != 0) {
        int check = n % 10;
        if(check == 4) return 0;
        n /= 10;
    }
    return 1;
}
int checksum(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 10 == 0){
        return 1;
    } else return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = pow(10, n - 1); i < pow(10, n); i++){
            if(checksum(i)) {
                if(check4(i)){
                    char num[10];
                sprintf(num, "%d", i);
                if(checktn(num)) printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}