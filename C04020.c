#include <stdio.h> 

int main(){
    int n, t;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);
    for(int i = t; i < n; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < t; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}