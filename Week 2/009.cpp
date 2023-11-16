#include <iostream>

using namespace std;



int main() {

    int a, b, c, biggest;

    cout << "Please enter the value a: ";
    cin >> a;

    cout << "Please enter the value b: ";
    cin >> b;

    cout << "Please enter the value c: ";
    cin >> c;

    biggest = a > b && a > c ? a : b > a && b > c ? b : c;

    cout << "The largest number : " << biggest << endl;

    return 0;
}
