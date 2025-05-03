#include <stdio.h>
#include <math.h>

long long fib[82];
void progress() {
   fib[0] = 0, fib[1] = 1;
   for (int i = 2; i <= 81; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
   }
}
int main() {
   progress();
   int n;
   scanf("%d", &n);
   int mx[n][n];
   int init = n * n;
   int cnt = 0;
   int top = 0, bot = n - 1, right = n - 1, left = 0;
   while (top <= bot && left <= right) {
      for (int i = left; i <= right; i++) {
         mx[top][i] = fib[cnt++];
      }
      top++;
      for (int i = top; i <= bot; i++) {
         mx[i][right] = fib[cnt++];
      }
      right--;
      if (top <= bot) {
         for (int i = right; i >= left; i--) {
            mx[bot][i] = fib[cnt++];
         }
         bot--;
      }
      if (left <= right) {
         for (int i = bot; i >= top; i--) {
            mx[i][left] = fib[cnt++];
         }
         left++;
      }
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", mx[i][j]);
      }
      printf("\n");
   }
   return 0;
}