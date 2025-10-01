#include<iostream>//this header file is used to include input output functions
using namespace std;//this header file is used to not include std:: before every cin and cout
int main()
{
    cout<<"Hello , World!"<<endl;//endl is used to move the cursor to next line
    return 0;//return 0 is used to indicate that the program ended successfully
}
// 1 bytes = 8 bits 
// to find range  of bytes= -2^(number of bits-1) to 2^(number of bits-1)-1
//range of short(2 bytes = 16 bits) = -2^15 to 2^15-1 = -32768 to 32767
//range of int(4 bytes = 32 bits) = -2^31 to 2^31-1 = -2147483648 to 2147483647te 
//signed type modifier stores in the range 0-256
//unsigned type modifier stores in the range -256-(-1)
//long type modifier increased the size of data type by 4 bytes but we have to write l in the end of the number
//long long type modifier increased the size of data type by 8 bytes but we have to write ll in the end of the number

