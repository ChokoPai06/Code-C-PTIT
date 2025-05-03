#include <stdio.h>

struct pokemon {
   char name[100];
   int cost;
   int stone;
   int cnt;
};

int main() {
   int n;
   scanf("%d", &n);
   struct pokemon res[100];
   for (int i = 0; i < n; i++) {
      scanf("%s%d%d", &res[i].name, &res[i].cost, &res[i].stone);
      int cnt = 0;
      while (res[i].stone >= res[i].cost) {
         res[i].stone -= res[i].cost;
         cnt++;
         res[i].stone += 2;
      }      
      res[i].cnt = cnt;
   }
   int index_most = 0;
   int total = 0;
   int most_evolved = 0;
   for (int i = 0; i < n; i++) {
      total += res[i].cnt;
      if (res[i].cnt > most_evolved) {
         most_evolved = res[i].cnt;
         index_most = i;
      }  
   }
   printf("%d\n%s", total, res[index_most].name);
   return 0;
}