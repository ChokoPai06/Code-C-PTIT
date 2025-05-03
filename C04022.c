#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = -1000000;
    int maxn= -1000000;
    for(int i = 0; i < n; i++){
        scanf("%d",  &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > max) {
            maxn = max;
            max = arr[i];
        } else if(arr[i] > maxn && arr[i] != max) {
            maxn = arr[i];
        }
    }
    printf("%d %d", max, maxn);
    return 0;
}