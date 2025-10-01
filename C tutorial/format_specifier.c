/*Format Specifiers are used in C programming to specify the type of data to be printed or read
they are used in functions like printf and scanf to indicate the type of variable being handled
here are some common format specifiers in C:*/

#include <stdio.h>


int main() {
    // Integer types
    int num = 42;
    short s = 10;
    long l = 123456789L;
    long long ll = 9876543210LL;

    // Unsigned integers
    unsigned int u = 100;
    unsigned long ul = 4294967295UL;

    // Character
    char c = 'A';

    // Floating point numbers
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 2.718281828459045L;

    // String
    char str[] = "Hello, World!";

    // Printing integers
    printf("%%d (int - decimal): %d\n", num);        // %d - for signed int in decimal
    printf("%%i (int - decimal): %i\n", num);        // %i - similar to %d, also for signed int
    printf("%%hd (short int): %hd\n", s);            // %hd - for short int
    printf("%%ld (long int): %ld\n", l);             // %ld - for long int
    printf("%%lld (long long int): %lld\n", ll);     // %lld - for long long int

    // Printing unsigned integers
    printf("%%u (unsigned int): %u\n", u);           // %u - for unsigned int
    printf("%%lu (unsigned long): %lu\n", ul);       // %lu - for unsigned long

    // Printing numbers in different bases
    printf("%%o (octal): %o\n", num);                // %o - prints integer in octal
    printf("%%x (hex lowercase): %x\n", num);        // %x - prints integer in hexadecimal (lowercase)
    printf("%%X (hex uppercase): %X\n", num);        // %X - prints integer in hexadecimal (uppercase)

    // Character and string
    printf("%%c (character): %c\n", c);              // %c - for single character
    printf("%%s (string): %s\n", str);               // %s - for null-terminated string

    // Floating point numbers
    printf("%%f (float - fixed point): %f\n", f);    // %f - for float/double in fixed decimal
    printf("%%lf (double - fixed point): %lf\n", d); // %lf - for double in fixed decimal
    printf("%%Lf (long double - fixed): %Lf\n", ld); // %Lf - for long double in fixed decimal

    printf("%%e (scientific notation, lowercase): %e\n", d); // %e - scientific notation
    printf("%%E (scientific notation, UPPERCASE): %E\n", d); // %E - scientific notation
    printf("%%g (shortest between %%f or %%e): %g\n", d);    // %g - shorter of %f or %e
    printf("%%G (shortest between %%f or %%E): %G\n", d);    // %G - shorter of %f or %E

    // Pointer address
    printf("%%p (pointer address): %p\n", (void*)&num); // %p - prints memory address (pointer)

    // Percent symbol
    printf("To print a percent sign: %%\n"); // %% - prints the % symbol itself

    return 0;
}