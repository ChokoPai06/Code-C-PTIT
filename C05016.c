#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int mx[n][n];
   int init = 1;
   int top = 0, bot = n - 1, right = n - 1, left = 0;
   while (top <= bot && left <= right) {
      for (int i = left; i <= right; i++) {
         mx[top][i] = init++;
      }
      top++;
      for (int i = top; i <= bot; i++) {
         mx[i][right] = init++;
      }
      right--;
      if (top <= bot) {
         for (int i = right; i >= left; i--) {
            mx[bot][i] = init++;
         }
         bot--;
      }
      if (left <= right) {
         for (int i = bot; i >= top; i--) {
            mx[i][left] = init++;
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