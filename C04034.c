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
        for(int i = 0; i < n - 1; i++){
            int check = 1;
            for(int j = i + 1; j < n; j++){
                if(arr[i] <= arr[j]) {
                    check = 0;
                    break;
                }
            }
            if(check){
                printf("%d ", arr[i]);
            }
        }
        printf("%d", arr[n - 1]);
        printf("\n");
    }
    return 0;
}