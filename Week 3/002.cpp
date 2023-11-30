#include <iostream>

using namespace std;

// Program to demonstrate the Bitwise Operators



int main() {

    int a = 6, b = 4;

    cout << "a & b is: " << (a & b) << endl;

    // copies a bit to the evaluated result if it exists in both operands

    //Binary OR
    

    // Binary AND operator

    cout << "a & b is: " << (a & b) << endl;


    // Binary OR operator

    cout << "a | b is: " << (a | b) << endl;
    // returns the left variable

    // Binary XOR operator

    cout << "a^b is: " << (a^b) << endl;

    // Left Shift operator

    cout << "a << 1 is: " << (a << 1) << endl;
    // Shift the value to left by the number of bits specified by the right operand

    // Right Shift operator

    cout << "a >> 1 is: " << (a >> 1) << endl;
    // Shift the value to right by the number of bits specified by the left operand

    // One's Complement operator

    cout << "~(a) is: " << (~ (a)) << endl;
    // Changes binary digits 1 to 0 and 0 to 1
    // return the value of a x (-1)
    
    

    return 0;
}
