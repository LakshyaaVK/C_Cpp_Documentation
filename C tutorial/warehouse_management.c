// Program to design a simple warehouse management system

#include <stdio.h>

int main() {
    int a[5], n;
    printf("Enter the temperature of 5 items:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        a[i] = n;
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] < 5) {
            printf("cold storage %d\n", a[i]);
        } else {
            printf("normal storage %d\n", a[i]);
        }
    }

    return 0;
}