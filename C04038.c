#include <stdio.h> 

int main() {
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < n - 1; i++) {
      int min = i;
      for (int j = i + 1; j < n; j++){
         int check = 0;
         if (arr[j] < arr[min]){
            min = j;
            check = 1;
         }
      }
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
      for (int j = 0; j < n; j++) {
         printf("%d ", arr[j]);
      }
      printf("\n");
   }
   return 0;
}