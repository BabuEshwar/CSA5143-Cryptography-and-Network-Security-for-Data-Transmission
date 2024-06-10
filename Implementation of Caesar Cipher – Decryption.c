#include <stdio.h>
#include <string.h>

int main() {
    char encrypted_message[100];
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int k, i, j;
    char decrypted_message[100];

    printf("Enter the message to be decrypted: ");
    fgets(encrypted_message, sizeof(encrypted_message), stdin);
    encrypted_message[strcspn(encrypted_message, "\n")] = 0; // remove newline character

    printf("Enter the key to decrypt: ");
    scanf("%d", &k);

    j = 0;
    for (i = 0; i < strlen(encrypted_message); i++) {
        char ch = encrypted_message[i];
        if (strchr(letters, tolower(ch))!= NULL) {
            int position = strchr(letters, tolower(ch)) - letters;
            int new_pos = (position - k) % 26;
            if (new_pos < 0) {
                new_pos += 26;
            }
            if (isupper(ch)) {
                decrypted_message[j++] = toupper(letters[new_pos]);
            } else {
                decrypted_message[j++] = letters[new_pos];
            }
        } else {
            decrypted_message[j++] = ch;
        }
    }
    decrypted_message[j] = '\0'; // null-terminate the string

    printf("Your decrypted message is:\n");
    printf("%s\n", decrypted_message);

    return 0;
}