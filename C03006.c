    #include <stdio.h> 
    #include <math.h>
    int main(){
        int t;
        scanf("%d", &t);
        for(int test = 1; test <= t; test++){
            int n;
            scanf("%d", &n);
            int m[100][2];
            int cnt = 0;
            for(int i = 2; i <= sqrt(n); i++){
                if(n % i == 0){
                    m[cnt][0] = i;
                    m[cnt][1] = 0;
                    while(n % i == 0) {
                        m[cnt][1]++;
                        n /= i;
                    }
                    cnt++;
                }
            }
            if(n > 1) {
                m[cnt][0] = n;
                m[cnt][1] = 1;
                cnt++;  
            }
            printf("Test %d: ", test);
            for(int i = 0; i < cnt; i++){
                printf("%d(%d)", m[i][0], m[i][1]);
                if(i < cnt) printf(" ");
            }
            printf("\n");

        }
        return 0;
    }