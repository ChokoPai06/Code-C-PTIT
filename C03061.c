#include <stdio.h>
#include <string.h> 

int checktn(char num[]) {
    for (int i = 1; i < (strlen(num) - 1) / 2; i++) {
        if (num[i] != num[strlen(num) - i - 1]) return 0;
    }
    return 1;
}
int checkdaucuoi(char num[]) {
    int first = num[0] - '0';
    int last = num[strlen(num) - 1] - '0';
    if (first * 2 == last || last * 2 == first) return 1;
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[20];
        scanf("%s", s);
        if (checktn(s) && checkdaucuoi(s)) {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}