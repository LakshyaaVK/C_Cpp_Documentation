#include<iostream>
using namespace std;
int main()
{
    float f= 3.141592f;
    double d= 3.141592653589793;
    long double ld= 3.14159265358979323846L ;
    cout<<"float: "<<f<<endl;
    cout<<"double: "<<d<<endl;
    cout<<"double "<<ld<<endl;
    return 0;
}
//float is used to store decimal values up to 6-7 digits after decimal point
//double is used to store decimal values up to 15-16 digits after decimal point
//long double is used to store decimal values up to 18-19 digits after decimal point
//float takes 4 bytes of memory
//double takes 8 bytes of memory    
//long double takes 10 bytes of memory
//f is used to indicate that the number is a float
//l is used to indicate that the number is a long double    
