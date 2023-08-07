#include <stdio.h>
#include <string.h>

int main() {
    char input[100], oddString[50], evenString[50];
    int i, j = 0, k = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (i % 2 == 0)
            evenString[j++] = input[i];
        else
            oddString[k++] = input[i];
    }
    evenString[j] = oddString[k] = '\0';

    printf("Odd-positioned characters: %s\n", oddString);
    printf("Even-positioned characters: %s\n", evenString);

    return 0;
}
