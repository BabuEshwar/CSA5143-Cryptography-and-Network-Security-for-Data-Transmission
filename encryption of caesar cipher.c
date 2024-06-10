#include <stdio.h>
#include <string.h>
int main() {
    char plaintext[] = "HELLO EVERYONE";
    int n = 1;
    char ans[100]; 
    int i;
    printf("plain text is: %s\n", plaintext);
    printf("shift pattern is: %d\n", n);
    for (i = 0; i < strlen(plaintext); i++) {
        char ch = plaintext[i];
        if (ch == ' ') {
            ans[i] = ' ';
        } else if (ch >= 'A' && ch <= 'Z') {
            ans[i] = (ch - 65 + n) % 26 + 65;
        } else {
            ans[i] = (ch - 97 + n) % 26 + 97;
        }
    }
    ans[i] = '\0'; 
    printf("cipher text is: %s\n", ans);
    return 0;
}