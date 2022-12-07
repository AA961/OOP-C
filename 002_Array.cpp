#include <iostream>
using namespace std;

class Array
{
public:
    int size;
    int *array;
    Array(int lenght)
    {
        size = lenght;
        array = new int(size);
    }

    void add(int index, int value)
    {
        array[index] = value;
    }

    void traverse(int index, int value)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (i >= index)
            {
                array[i + 1] = array[i];

                if (i == index)
                {
                    array[i] = value;
                }
            }
        }
    }

    void search(int value)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] == value)
            {
                cout << value << " is at " << i << " index " << endl;
                break;
            }
        }
    }

    void display()
    {
        for (unsigned int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
    }

    void remove(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        array[size - 1] = 0;
    }
};

int main()
{
    Array newArray(10);

    newArray.add(0, 100);
    newArray.add(1, 200);
    newArray.add(2, 300);
    newArray.traverse(2, 500);
    newArray.search(200);
    newArray.remove(0);
    newArray.display();

    return 0;
}