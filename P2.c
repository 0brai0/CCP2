#include <stdio.h>

int main() {
    char input[4]; // 3 characters + null terminator
    int i;

    printf("Enter a three-character string (e-m): ");
    scanf("%3s", input);

    if (input[0] < 'e' || input[0] > 'm' || input[1] < 'e' || input[1] > 'm' || input[2] < 'e' || input[2] > 'm') {
        printf("Invalid input. The characters must be between 'e' and 'm'.\n");
        return 1;
    }

    printf("\nCharacter\tASCII Value\n");
    printf("-------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("%c\t\t%d\n", input[i], input[i]);
    }

    return 0;
}
