#include <stdio.h>

/*
Assignment Operators in C

Assignment operators are used to assign values to variables. 
Some commonly used assignment operators are:

=   Simple assignment
+=  Add and assign
-=  Subtract and assign
*=  Multiply and assign
/=  Divide and assign
%=  Modulus and assign
*/

int main() {
    int a = 10;      // = assigns 10 to a
    int b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    a += b;          // a = a + b
    printf("After a += b, a = %d\n", a);

    a -= b;          // a = a - b
    printf("After a -= b, a = %d\n", a);

    a *= b;          // a = a * b
    printf("After a *= b, a = %d\n", a);

    a /= b;          // a = a / b
    printf("After a /= b, a = %d\n", a);

    a %= b;          // a = a % b
    printf("After a %%= b, a = %d\n", a);

    return 0;
}