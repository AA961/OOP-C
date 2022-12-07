#include <iostream>
using namespace std;

class FirstClass
{
public:
    string name;
    int roll_no;

    FirstClass()
    {
        cout << "First Class" << endl;
    }

    void greeting(string name)
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{

    FirstClass first;
    first.name = "John";
    first.roll_no = 10;

    first.greeting(first.name);

    return 0;
}