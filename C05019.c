#include <stdio.h>
#include <math.h>

int p[500];
int nt (int n) {
   if (n < 2) return 0;
   for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return 0;
   }
   return 1;
}
void progress() {
   int i = 0, cnt = 0;
   while (cnt < 400) {
      if (nt(i)) {
         p[cnt++] = i;
      }
      i++;
   }
}
int main() {
   progress();
   int tt;
   scanf("%d", &tt);
   for (int t = 1; t <= tt; t++) {
      int n;
      scanf("%d", &n);
      int mx[n][n];
      int init = n * n;
      int cnt = 0;
      int top = 0, bot = n - 1, right = n - 1, left = 0;
      while (top <= bot && left <= right) {
         for (int i = left; i <= right; i++) {
            mx[top][i] = p[cnt++];
         }
         top++;
         for (int i = top; i <= bot; i++) {
            mx[i][right] = p[cnt++];
         }
         right--;
         if (top <= bot) {
            for (int i = right; i >= left; i--) {
               mx[bot][i] = p[cnt++];
            }
            bot--;
         }
         if (left <= right) {
            for (int i = bot; i >= top; i--) {
               mx[i][left] = p[cnt++];
            }
            left++;
         }
      }
      printf("Test %d:\n", t);
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            printf("%d ", mx[i][j]);
         }
         printf("\n");
      }
   }
   return 0;
}