#include <iostream> 
using namespace std;
int main()
{
    int year;
    cout << "Enter year: "<<endl;
    cin >> year;

    if(year % 400 == 0)
    {
        cout<<year<< " is Leap Year"<<endl;
    }
    else if(year % 100 == 0)
    {
        cout<<year<< " is Not Leap Year"<<endl;
    }
    else if(year % 4 ==0)
    {
        cout<<year<< " is Leap Year"<<endl;
    }
    else
    {
        cout<<year<< " is Not Leap Year"<<endl;
    }
    return 0;
}