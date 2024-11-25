#include <stdio.h>

int main() {
    char str[100]; // input string with size 100
    int words = 0, newline = 0, characters = 0; // counter variables
    int i; // Declare the loop variable outside the for loop

    // Read the input string until '~' is encountered
    scanf("%[^~]", str); // Use 'str' without the address-of operator (&) as it is already a pointer

    // Process each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        } else if (str[i] == '\n') {
            newline++;
            words++; // Increment words for each newline (corner case)
        } else if (str[i] != ' ' && str[i] != '\n') {
            characters++;
        }
    }

    // Handle edge cases: count a word and newline if there are characters
    if (characters > 0) {
        words++;
        newline++;
    }

    // Print the results
    printf("Total number of words: %d\n", words);
    printf("Total number of lines: %d\n", newline);
    printf("Total number of characters: %d\n", characters);

    return 0;
}

