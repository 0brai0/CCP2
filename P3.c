#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100], firstWord[6];
    int i, j;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Extract the first word from the sentence
    i = 0;
    j = 0;
    while (sentence[i] != '\0' && sentence[i] != ' ' && j < 5) {
        firstWord[j] = sentence[i];
        i++;
        j++;
    }
    firstWord[j] = '\0';

    // Check if the first character is not in uppercase, then convert it to uppercase
    if (islower(firstWord[0])) {
        firstWord[0] = toupper(firstWord[0]);
    }

    printf("The first word: %s\n", firstWord);
    return 0;
}
