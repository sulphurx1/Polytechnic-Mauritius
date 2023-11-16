#include <iostream>

using namespace std;

float pi = 3.14;
int r;
float area;

void areaCircle() {

    cout << "Please enter a radius: ";

    cin >> r;

    area = pi * (r * r);
    
    cout << "The area of the circle: " << area << endl;

}

void areaRectangle() {

    int l;

    cout << "Please enter the width: ";
    cin >> l;

    cout << "Please enter the height: ";
    cin >> r;

    area = r * l;

    cout << "The area of the rectangle: " << area << endl;

}

void areaSquare() {

    cout << "Please enter the length: ";

    cin >> r;

    area = r * 2;

    cout << "The area of the square: " << area << endl;


}

// write a program to calculate the area of a circle
// pi * r^2

int main() {

    int choose;

    cout << "Area calculator" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "Please enter choose: ";

    cin >> choose;

    if(choose == 1) {
        areaCircle();
    }

    else if(choose == 2) {
        areaRectangle();
    }

    else if(choose == 3) {
        areaSquare();
    }
    else {
        cout << "Error!" << endl;
    }

    return 0;
}

