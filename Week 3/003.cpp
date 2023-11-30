#include <iostream>

using namespace std;



int main() {

    int a = 3, b = 4, c = 5;
    int biggest;

    biggest = (a < b) ? (b < c) ? (a < c) ? b : a, b : c, c: a;

    cout << "The biggest number is: " << biggest << endl;

    // write a c++ program to add two binary numbers

    // write a c++ program to demonstrate fionacci

    return 0;
}
