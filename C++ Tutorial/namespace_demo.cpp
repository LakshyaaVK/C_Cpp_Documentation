/*A namespace is a block of code where we can have variables , functions 
etc which can work indenpendently without clashing with any other parts of the 
code in the same file ,even if there are variables /functions of the samename*/


#include <iostream>
using namespace std;

// First namespace
namespace User1 {
    void greet() {
        cout << "Hello from User1!" << endl;
    }
}

// Second namespace
namespace User2 {
    void greet() {
        cout << "Hello from User2!" << endl;
    }
}

int main() {
    User1::greet(); // Calls greet from User1
    User2::greet(); // Calls greet from User2
}