/*The process of wrapping the data inside the class by using the 
"private" access modifier so that the data is not accidentaly modified*/
#include<iostream>
using namespace std;
class employee{
private:
string name;
int age;
string company;
public:
void setname(string name){
    this->name = name;
}
void setage(int age){
    this->age = age;
}
void setcompany(string company){
    this->company = company;
}
//getters
string getname(){
    return name;
}
int getage(){
    return age;
}
string getcompany(){
    return company;
}
}; 

int main()
{
    employee e1;
    employee e2 = employee(); //default constructor
    e1.setname("Sahana");
    e1.setage(20);
    e1.setcompany("Microsoft");
    cout << "Employee 1 name is: " << e1.getname() << endl;
    cout << "Employee 1 age is: " << e1.getage() << endl;
    cout << "Employee 1 company is: " << e1.getcompany() << endl;
    return 0;
}