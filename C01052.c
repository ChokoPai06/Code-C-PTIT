#include <stdio.h> 
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int sum = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0) {
                if(i % 2 == 0) sum++;
                int ud = n / i;
                if(ud != i && ud % 2 == 0) sum++;
            }
            
        }
        printf("%d\n", sum);
    }
    return 0;
}