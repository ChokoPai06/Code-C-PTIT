#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int mx[n];
    int arr[n][2];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        arr[i][0] = -1;
        arr[i][1] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &mx[i]);
        int found = 0;
        for(int j = 0; j < cnt; j++){
            if(arr[j][0] == mx[i]){
                arr[j][1]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            arr[cnt][0] = mx[i];
            arr[cnt][1]++;
            cnt++;
        }
    }
    int found = 0;
    int cntres = 0;
    for(int i = 0; i < cnt; i++){
        if(arr[i][1] == 1){
            cntres++;
        }
    }
    printf("%d\n", cntres);
    for(int i = 0; i < cnt; i++){
        if(arr[i][1] == 1){
            printf("%d ", arr[i][0]);
            found = 1;
        }
    }
    if(!found) printf("0");
return 0;
}