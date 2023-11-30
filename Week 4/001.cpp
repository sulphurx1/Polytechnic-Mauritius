#include <iostream>

using namespace std;

// function c++
// there are two types of function
// standard library functions: predefined in c++
// user-defined function: created by users
// predefined functions: strcat() - to concatenate two strings
// memcpy() - to copy one memory location to another location and many more functions

// function declaration:

// declaring function
void greet() {
    cout << "Hello there!" << endl;
}

// a parameter is a value that is pass when using a function

void printNum(int num = 3) {
    cout << num << endl;
}

void displayNum(int n1, float n2) {
    cout << "Number 1 is: " << n1 << endl;
    cout << "Number 2 is: " << n2 << endl;
}

int add(int a, int b) {
    return (a +b );
}


int main() {

    // calling the function

    greet();

    int n = 7;

    printNum();

    int num1 = 5;
    float num2 = 5.5;

    displayNum(num1, num2);

    int sum;

    // call the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    // return 0 means the program has ended(exit)
    return 0;
}
