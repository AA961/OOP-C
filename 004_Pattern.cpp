#include <iostream>
using namespace std;

int main() {
    int n = 10; // number of rows
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        int k = 0;
        while(k < n-i) {
            cout << "* ";
            k++;
        }
        cout << endl;
    }
    return 0;
}