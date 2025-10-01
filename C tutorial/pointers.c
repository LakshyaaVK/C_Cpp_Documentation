//it is a variable that stores the memory address of another variable.
// in c language hexadecimal values start with 0x
//& can only fetch the value of the address , but it cannot store the address
// A pointer can also be reference a address 
//A pointer always begins with * int *p;-null pointer
//The pointer stores the address of the variable and by default prints the address
//The referencing the value of the variable from address
#include <stdio.h>
int main() {
    int a[] = {100, 2, 3, 4, 5};
    int *p = a; // p points to the first element of array a
    for (int i = 0; i < 5; i++) {
        printf("the value is %d stored in %p\n", *(p + i), (void *)(p + i));
    }
    // %p is a format specifier that displays the value in hexadecimal
    return 0;
}
//Pointer can be used to access values inside an array without indexing
//A pointer can reference the values inside an array 
//If an array is assigned to a pointer, then the pointer by default will pick up the first value in the array
//A gap of 4 exists because integers consume 4 bytes of

