#include <iostream>
#include <bitset>

int main() {
    // Input binary numbers as strings
    std::string binary1, binary2;

    std::cout << "Enter the first binary number: ";
    std::cin >> binary1;

    std::cout << "Enter the second binary number: ";
    std::cin >> binary2;

    // Convert binary strings to integers
    int num1 = std::bitset<32>(binary1).to_ulong();
    int num2 = std::bitset<32>(binary2).to_ulong();

    // Add the binary numbers
    int sum = num1 + num2;

    // Display the result in binary
    std::cout << "Sum in binary: " << std::bitset<32>(sum) << std::endl;

    return 0;
}
