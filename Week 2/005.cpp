#include <iostream>

using namespace std;

int main() {
    
    int a = 10;
    int b = 25;

    int temp;

    cout << "before a: " << a << endl;
    cout << "before b: " << b << endl;   

    temp = a;
    a = b;
    b = temp;

    cout << "after a: " << a << endl;
    cout << "after b: " << b << endl;

    return 0;
}