#include <stdio.h>

int main() {
    char str[100]; // input string with size 100
    int words = 0, newline = 0, characters = 0; // counter variables
    int in_word = 0; // to track if we are inside a word or not
    int i;

    // Use fgets to safely read a line of input
    while (fgets(str, sizeof(str), stdin)) {
        // Process each line character by character
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ' || str[i] == '\t') { 
                // If a space or tab is encountered, a word ends
                if (in_word) {
                    words++;
                    in_word = 0;
                }
            } else if (str[i] == '\n') {
                // If newline is encountered, count it as a line
                newline++;
                if (in_word) {
                    words++;
                    in_word = 0;
                }
            } else {
                // Any non-space, non-newline character is part of a word
                characters++;
                in_word = 1;
            }
        }
    }

    // If there's an unclosed word at the end of input, count it
    if (in_word) {
        words++;
    }

    // Output the results
    printf("Total number of words: %d\n", words);
    printf("Total number of lines: %d\n", newline);
    printf("Total number of characters: %d\n", characters);

    return 0;
}

