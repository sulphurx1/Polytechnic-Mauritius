#include <iostream>

// Function to generate Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    std::cout << "Fibonacci Sequence up to " << n << " terms:\n";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }

    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the number of terms for Fibonacci sequence: ";
    std::cin >> n;

    generateFibonacci(n);

    return 0;
}
