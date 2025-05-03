#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int cnt = 0;
        int half = n / 2;
        int start = pow(10, half - 1);
        int end = pow(10, half) - 1;
        for (int i = start; i <= end; i++) {
            int sum = 0;
            int temp = i;
            while (temp > 0) {
               sum += temp % 10;
               temp /= 10;
            }
            if (n % 2 == 1) {
               for (int mid = 0; mid <= 9; mid++) {
                  if ((sum * 2 + mid) % 10 == 0) {
                     cnt++;
                  }
               }
            } else {
               if ((sum * 2) % 10 == 0) {
                  cnt++;
               }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}