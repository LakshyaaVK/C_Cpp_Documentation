/*  A variable is a storage location in memory with a name and a type
It can hold different values during the execution of a program */
#include <stdio.h>
int main()
{
    int age = 25; // integer variable
    float height = 5.9; // floating-point variable
    char grade = 'A'; // character variable 
    printf("Age: %d\n", age);//format specifier %d is used for integers 
    printf("Height: %.1f\n", height);//format specifier %.1f is used for float
    printf("Grade: %c\n", grade);//format specifier %c is used for char
    return 0;
}