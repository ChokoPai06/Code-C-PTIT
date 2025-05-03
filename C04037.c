#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx[n][2];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        mx[i][0] = -1;
        mx[i][1] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int found = 0;
        for(int j = 0; j < cnt; j++){
            if(mx[j][0] == arr[i]){
                mx[j][1]++;
                found = 1;
                break;
            }
        }
        if(!found){
            mx[i][0] = arr[i];
            mx[i][1]++;
            cnt++;
        }
    }
    int cnt2 = 0;
    for(int i = 0; i < cnt; i++){
        if(mx[i][1] > 1) cnt2++;
    }
    printf("%d\n", cnt2);
    for(int i = 0; i < cnt; i++){
        if(mx[i][1] > 1){
            printf("%d ", mx[i][0]);
        }
    }
    return 0;
}