#include <stdio.h>
#include <string.h>
int main() {
    char key[100];
    printf("Enter the key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = 0; 
    char matrix[5][5];
    int row = 0, col = 0;
    int letters_added[26] = {0}; 
    for (int i = 0; i < strlen(key); i++) {
        char letter = toupper(key[i]);
        if (!letters_added[letter - 65]) {
            matrix[row][col] = letter;
            letters_added[letter - 65] = 1;
        }
        if (col == 4) {
            col = 0;
            row++;
        } else {
            col++;
        }
    }
    for (int i = 65; i < 91; i++) {
        if (i == 74) continue; 
        if (!letters_added[i - 65]) {
            letters_added[i - 65] = 1;
            matrix[row][col] = i;
            if (col == 4) {
                col = 0;
                row++;
            } else {
                col++;
            }
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}