//the boolean in ic is not avaliable by default but can be accessed by usibg stdbool.h
#include <stdio.h>
#include <stdbool.h>    
int main() {
    bool a = true;
    bool b = false;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
//we can also use 0 and 1 to represent false and true respectively