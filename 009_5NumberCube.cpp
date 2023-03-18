#include <iostream> 
using namespace std;
int main()
{
    int num = 1;
    do{
        int cube = num * num *num;
        cout <<"Cube of "<<num<<" is "<< cube << endl;
        num++;
    }while(num<6);
 
    return 0;
}