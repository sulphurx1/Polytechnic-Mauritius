#include <iostream>
#include <bitset>

using namespace std;



int main() {

    string binary1, binary2;
    cout << "Enter the first binary number: ";
    cin >> binary1;

    cout << "Enter the second binary number: ";
    cin >> binary2;

    int num1 = bitset<32>(binary1).to_ulong();
    int num2 = bitset<32>(binary2).to_ulong();

    int sum = num1 + num2;

    cout << "Sum in binary: " << bitset<32>(sum) << endl;

        return 0;
}
