#include <stdio.h>

// Example of nested loops in C

int main() {
    int i, j;

    // Print a 5x5 grid of asterisks using nested loops
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}