#include <stdio.h> 
#include <math.h>
int checkprime(int n){
   if(n < 2) return 0;
   for(int i = 2;  i <= sqrt(n); i++){
      if(n % i == 0) return 0;
   }
   return 1;
}
int main(){
   int t;
   scanf("%d", &t);
   for(int k = 1; k <= t; k++){
      int n;
      scanf("%d", &n);
      int mx[n];
      int arr[n][2];
      int cnt = 0;
      for (int i = 0; i < n; i++) {
         arr[i][0] = -1;
         arr[i][1] = 0;
      }
      for(int i = 0; i < n; i++){
         scanf("%d", &mx[i]);
         int found = 0;
         for(int j = 0; j < cnt; j++){
               if(arr[j][0] == mx[i]){
                  arr[j][1]++;
                  found = 1;
                  break;
               }
         }
         if(!found) {
               arr[cnt][0] = mx[i];
               arr[cnt][1]++;
               cnt++;
         }
      }
      printf("Test %d:\n", k);
      for(int i = 0; i < cnt - 1; i++){
         for(int j = i + 1; j < cnt; j++){
               int temp;
               if(arr[i][0] > arr[j][0]){
                  temp = arr[i][0];
                  arr[i][0] = arr[j][0];
                  arr[j][0] = temp;
                  
                  temp = arr[i][1];
                  arr[i][1] = arr[j][1];
                  arr[j][1] = temp;
               }   
         }
      }
      for(int i = 0; i < cnt; i++){
         if(checkprime(arr[i][0])){
               printf("%d xuat hien %d lan\n", arr[i][0], arr[i][1]);
         }
         
      }
   }
   return 0;
}