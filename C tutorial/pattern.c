#include <stdio.h>

// Print a pattern of stars: 5, 4, 3, 2, 1 stars per row

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {         // Rows: 5 to 1
        for (j = 1; j <= i; j++) {     // Columns: print i stars
            printf("a");
        }
        printf("\n");                  // Newline after each row
    }

    return 0;
}