#include <stdio.h> 

int main(){
   int n;
   scanf("%d", &n);
   int year = n / 365;
   int week = (n % 365) / 7;
   int day = (n % 365) % 7;
   printf("%d %d %d", year, week, day);
   return 0;
}