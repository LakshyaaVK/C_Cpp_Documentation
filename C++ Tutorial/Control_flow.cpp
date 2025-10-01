/*#include<iostream>//Smallest Number Program
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the values"<<endl;
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
        cout<<a<<" is the smallest number"<<endl;
    }
    else if(b<a && b<c)
    {
        cout<<b<<" is the smallest number"<<endl;
    }
    else
    {
        cout<<c<<" is the smallest number"<<endl;
    }
}*/
//switch case program
/*#include<iostream>          
using namespace std;        
int main()
{
    int day;
    cout<<"enter the day number"<<endl;
    cin>>day;
    switch(day)
    {
        case 1: cout<<"monday"<<endl;
                break;
        case 2: cout<<"tuesday"<<endl;
                break;
        case 3: cout<<"wednesday"<<endl;
                break;
        case 4: cout<<"thursday"<<endl;
                break;
        case 5: cout<<"friday"<<endl;
                break;
        case 6: cout<<"saturday"<<endl;
                break;
        case 7: cout<<"sunday"<<endl;
                break;        
        default:cout<<"invalid input"<<endl;        
    }
    }  */
    
    
    //Looping Statements 
    #include<iostream>
    using namespace std;
    int main()
    {
      for(int i = 19; i <= 26; i++)
      {
        if(i % 2 == 0)
        {
            cout << i << " is even" << endl;
        }
    }
}
        /* 
        else
        {
            cout << i << " is odd" << endl;
        }
    }  
}

*/

// Pattern Printing Program
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            // Print '*' at borders, space elsewhere
            if(i == 1 || i == rows || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
