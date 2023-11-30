#include <iostream>

using namespace std;

// fucntion prototype
int add(int, int);

int main() {

    int sum;

    // calling the function and storing the returned value in sum
    sum = add(100, 78);

    cout << "Sum of 100 + 78 = " << sum << endl;

    return 0;
}

// function definition

int add(int a, int b) {
    return (a + b);
}
