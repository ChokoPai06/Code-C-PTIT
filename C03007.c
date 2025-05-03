#include <stdio.h> 
#include <math.h>
#include <string.h>

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}
int palindrome(char num[]){
    int length = strlen(num);
    for (int j = 0; j < length / 2; j++){
        if(num[j] != num[length - j - 1]) {
            return 0;
        }
    }   
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(prime(i)) {
                char num[20];
                sprintf(num, "%d", i);
                if(palindrome(num)) {
                    printf("%d ", i);
                    cnt++;
                }
                if(cnt == 10){
                    printf("\n");
                    cnt = 0;
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}