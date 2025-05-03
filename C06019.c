#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[50];
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = 0;
    for (int i = 0; i < strlen(c); i++) {
        c[i] = tolower(c[i]);
    }
    char a[10][100];
    int n = 0;
    char *tok = strtok(c, " ");
    while(tok != NULL) {
        strcpy(a[n++], tok);
        tok = strtok(NULL, " ");
    }
    for(int i = 0; i < n - 1; i++){
        printf("%c", a[i][0]);
    }
    printf("%s@ptit.edu.vn\n", a[n - 1]);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char c[50];
//     fgets(c, sizeof(c), stdin);
//     c[strcspn(c, "\n")] = 0;
//     for (int i = 0; i < strlen(c); i++) {
//         c[i] = tolower(c[i]);
//     }
//     int i = 0;
//     while (c[i] == ' ') i++;
//     printf("%c", c[i]);
//     int lastsp = -1;
//     for (int j = i; j < strlen(c); j++) {
//         if (c[j] == ' ' && c[j + 1] != ' ' && c[j + 1] != '\0') {
//             lastsp = j;
//         }
//     }
//     for (int j = i + 1; j < lastsp; j++) {
//         if (c[j] == ' ' && c[j + 1] != ' ' && c[j + 1] != '\0') {
//             printf("%c", c[j + 1]);
//         }
//     }
//     if (lastsp != -1) {
//         for (int j = lastsp + 1; j < strlen(c); j++) {
//             if(c[j] != ' ') printf("%c", c[j]);
//         }
//     }
//     printf("@ptit.edu.vn\n");

//     return 0;
// }
