#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx[n][2];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
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
            mx[cnt][0] = arr[i];
            mx[cnt][1]++;
            cnt++;
        }    
    }
    for(int i = 0; i < cnt; i++){
            printf("%d ", mx[i][0]);
        }
    return 0;
}