#include <stdio.h>
#include <string.h>
int main() {
    char message[100];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0; 
    int index = 0;
    while (index < strlen(message)) {
        char l1 = message[index];
        if (index == strlen(message) - 1) {
            strcat(message, "X");
            index += 2;
            continue;
        }
        char l2 = message[index + 1];
        if (l1 == l2) {
            char temp[100];
            strncpy(temp, message, index + 1);
            temp[index + 1] = 'X';
            strcat(temp, message + index + 1);
            strcpy(message, temp);
            index += 2;
        } else {
            index++;
        }
    }
    printf("Modified message: %s\n", message);
    return 0;
}