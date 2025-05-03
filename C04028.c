#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   printf("Buoc 0: %d\n", arr[0]);
   for (int i = 1; i < n; i++) {
      int key = arr[i];
      int pos = i - 1;
      while (key < arr[pos] && pos >= 0) {
            arr[pos + 1] = arr[pos];
            pos--;
      }
      arr[pos + 1] = key;
      printf("Buoc %d: ", i);
      for (int j = 0; j <= i; j++) {
         printf("%d ", arr[j]);
      }
      printf("\n");
   }
   return 0;
}