#include <iostream>

using namespace std;



int main() {
    int a;

    string result;

    cout << "Please enter a number : ";

    cin >> a;

    result = (a < 0) ? (a == 0) ? "negative" : "positve", "zero" : "not a number";

    cout << "The number is " << a << " " << result << endl;



    return 0;
}
