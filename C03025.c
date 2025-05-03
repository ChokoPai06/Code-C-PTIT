#include <stdio.h>
#include <math.h>

int checkprime(int n) {
   if (n < 2) return 0;
   if (n <= 3) return 1;
   if (n % 2 == 0 || n % 3 == 0) return 0;
   for (int i = 5; i * i <= n; i += 6) {
      if (n % i == 0 || n % (i + 2) == 0) return 0;
   }
   return 1;
}
int checklast(int n) {
	while(n != 0) {
		int last = n % 10;
      if(!checkprime(last)) return 0;
		n /= 10;
	}
	return 1;
}
int checksum(int n) {
    int sum = 0;
	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return checkprime(sum);
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		if(a > b) {
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
		int cnt = 0;
		for(int i = a; i <= b; i++) {
			if(checkprime(i) && checklast(i) && checksum(i)){
				cnt++;
			}
		}
      printf("%d\n", cnt);
	}
	return 0;
}