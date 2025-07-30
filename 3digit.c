#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    int valid = 0;
    while (!valid) {
        printf("Enter a positive integer: ");
        scanf("%s", input);

        valid = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                valid = 0;
                printf("Invalid input! Only digits are allowed.\n");
                break;
            }
        }
    }
    int len = strlen(input);
    printf("Reversed number: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
