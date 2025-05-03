#include <stdio.h> 
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n; 
        scanf("%d", &n);
        int cnt = 0;
        if(n % 2 == 0) cnt++;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0) {
                if(i % 2 == 0){
                    cnt++;
                }
                int other = n / i;
                if(other != i && other % 2 == 0){
                    cnt++;
                }
            }
            
        }
        printf("%d\n", cnt);
    }
    return 0;
}