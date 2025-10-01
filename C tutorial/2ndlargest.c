//write a program to print the second largest number in an array pointers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}


    