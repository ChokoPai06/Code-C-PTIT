#include <stdio.h> 
#include <math.h>
int checkprime(int n){
    if(n < 2) return 0;
    for(int i = 2;  i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i = 0;  i < t; i++){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    for(int i = 0; i < t; i++){
        if(checkprime(arr[i])){
            cnt++;
        }
    }
    printf("%d ", cnt);
    for(int i = 0; i < t; i++){
        if(checkprime(arr[i])){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}