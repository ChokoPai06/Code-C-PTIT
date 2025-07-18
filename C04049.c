#include <stdio.h> 

int gcd(int a, int b) {
   while (b != 0) {
      int temp = a % b;
      a = b;
      b = temp;
   }
   return a;
}

int lcm(int a, int b) {
   return a / gcd(a, b) * b;
}

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
      int n;
      scanf("%d", &n);
      int a[n];
      for (int i = 0; i < n; i++) {
         scanf("%d", &a[i]);
      }
      int b[n + 1];
      b[0] = a[0];
      for (int i = 1; i < n + 1; i++) {
         b[i] = lcm(a[i], a[i - 1]);
      }
      b[n] = a[n - 1];
      for (int i = 0; i < n + 1; i++) {
         printf("%d ", b[i]);
      }
      printf("\n");
   }
   return 0;
}