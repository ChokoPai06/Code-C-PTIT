#include <stdio.h> 

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]) cnt++;
        }
        printf("%d\n",  cnt);
    }
    return 0;
}