#include <stdio.h>

// Program to print the pattern:
// 1
// 122
// 333
// 4444
// 55555

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}