#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long n;
		scanf("%lld", &n);
		long long fib[93];
		fib[0] = 0;
		fib[1] = 1;
		for(int i  = 2; i < 92; i++){
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		int check = 0;
		for(int i = 0; i < 92; i++){
			if(n == fib[i]) {
				check = 1;
				break;
			}
		}
		if(check){
			printf("YES\n");
		} else printf("NO\n");
	}
	return 0;
}
