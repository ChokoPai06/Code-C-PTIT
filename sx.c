#include <stdio.h> 
#include <stdlib.h>

struct ts {
  int stt;
  char name[50];
  char bd[20];
  double a1, a2, a3;
  double gpa;
};

int cmp(const void *a, const void *b) {
  if (((struct ts*)a)->gpa == ((struct ts*)b)->gpa) {
    return (((struct ts*)a)->stt - ((struct ts*)b)->stt);
  } else return ((struct ts*)b)->gpa > ((struct ts*)a)->gpa ? 1 : -1;
}

int main() {
  int n;
  scanf("%d", &n);
  scanf("\n");
  struct ts sv[100];
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    sv[i].stt = cnt++;
    gets(sv[i].name);
    scanf("\n");
    gets(sv[i].bd);
    scanf("\n");
    scanf("%lf%lf%lf", &sv[i].a1, &sv[i].a2, &sv[i].a3);
    scanf("\n");
    sv[i].gpa = sv[i].a1 + sv[i].a2 + sv[i].a3;
  }
  qsort(sv, n, sizeof(struct ts), cmp);
  for (int i = 0; i < n; i++) {
    printf("%d %s %s %.1lf\n", sv[i].stt, sv[i].name, sv[i].bd, sv[i].gpa);
  }
  return 0;
}

long long gcd(long long a, long long b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long r = b;
    b = a % b;
    a = r;
  }
  return a;
}

long long power(int a, int b) {
  long long ans = 1;
  while (b != 0) {
    if (b % 2 == 1) {
      ans *= a;
    }
    a *= a;
    b /= 2;
  }
  return ans;
}