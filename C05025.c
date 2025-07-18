#include <stdio.h> 
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main() {
   int t;
   scanf("%d", &t);
   for (int tt = 1; tt <= t; tt++) {
      int n, m;
      scanf("%d%d", &n, &m);
      int A[n][m];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
         }
      }
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            for (int k = i; k < n; k++) {
               for (int l = j; l < m; l++) {
                  if (A[i][j] > A[k][l]) {
                     swap(&A[i][j], &A[k][l]);
                  }
               }
            }
         }
      }
      printf("Test %d:\n", tt); 
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
            printf("%d ", A[i][j]);
         }
         printf("\n");
      }
   }
   return 0;
}