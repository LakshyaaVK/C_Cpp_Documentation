#include <stdio.h>

// Program to print the pattern:
// a
// ab
// abc
// abcd
// abcde

int main() {
    int i, j;

    // Outer loop controls the number of rows (from 1 to 5)
    for (i = 1; i <= 5; i++) {
        // Inner loop prints characters in each row
        // For row i, print i characters starting from 'a'
        for (j = 1; j <= i; j++) {
            // 'a' has ASCII value 97
            // For each column, add (j-1) to 'a' to get the next character
            // Example: if j=1, 'a'+0 = 'a'; if j=2, 'a'+1 = 'b'; etc.
            printf("%c", 'a' + j - 1);
        }
        // After printing all characters for the current row, move to the next line
        printf("\n");
    }

    // Return 0 to indicate successful program execution
    return 0;
}