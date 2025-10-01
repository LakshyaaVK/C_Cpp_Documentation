/*. User Defined Data Types
Primary - int char float double  
Void -void
Enumerated - enum 
Derived - array pointer struct*/



/*
#include<iostream>
using namespace std;
struct employee{
    char name[20];//we need to create a dynamic array to store the name ritik
    int age;
    int enpID;
};
int main(){
    struct employee e;
    e.name="Ritik";
    return 0;
}
#include<iostream>
using namespace std;
struct employee{
    char *name;//by using star we have declared a dynamic array
    int age;
    int empID;
};
int main(){
    struct employee e;
    e.name="Ritik";
    e.empID=1001;
    cout<<"Name:<<e.name<<endl";
    cout<<"Emp ID:<<e.empID<<endl";
    return 0;
}*/
//Static allocation
#include<iostream>
using namespace std;
struct employee{
    char name[20];//20 bytes
    int age;//4
    int empID;//4
};
int main(){
    struct employee e;
   // e.name="Ritik";
   strcpy(e.name,"Ritik");//we use string copy function to copy the string into the array
    e.empID=1001;
    cout<<"Name:"<<e.name<<endl;
    cout<<"Emp ID:"<<e.empID<<endl;
    cout<<"Size of structure:"<<sizeof(e)<<endl;//size of e is 20+4+4=28 bytes
    return 0;
}