//for union assign and display immediately cause it can store only one value at a time

#include<iostream>
using namespace std;
union employee{
    char name[20];//20 bytes
    int age;//4
    int empID;//4

};
int main(){
    union employee e;
   // e.name="Ritik";
   

    strcpy(e.name,"Ritik");//copy string into the char array
    cout<<"Name:"<<e.name<<endl;
    e.empID=1001;
    cout<<"Emp ID:"<<e.empID<<endl;
    cout<<"Size of structure:"<<sizeof(e)<<endl;//size of e is 20+4+4=28 bytes
    return 0;
}





