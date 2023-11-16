#include <iostream>

using namespace std;



int main() {

    int p, t;
    double a, r;

    r = 0.25;

    cout << "Welcome simple interest calculator" << endl;

    cout << "Please enter initial principal balance: ";
    cin >> p;

    cout << "Please enter time(in years): ";
    cin >> t;

    a = (p * r * t) / 100.0;

    cout << "The simple interest is: " << a << endl;

    return 0;
}
