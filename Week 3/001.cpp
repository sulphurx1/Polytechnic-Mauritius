#include <iostream>

using namespace std;



int main() {

	static int a = 10;

	++a;

	cout << a << endl;
	cout << a << endl;

	int b = 20;

	++b;

	cout << b << endl;
	cout << b << endl;

	// there are 3 types of datatypes
	// primitive data type: integer, character, boolean
	// primitive data type takes 4 bytes of memory for interger
	// character 1 byte
	// 1 byte = 8 bis
	// float point data - 4 bytes
	// void does not return a value

	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	cout << "Size of float: " << sizeof(float) << endl;

	// datatypes modifiers
	// signed
	// unsigned
	// long
	// short

	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;

	//  Operators
	// example: ++, --
	// ++a, the value of the variabe is increment first then it added

	int z = 6, x = 4;

	// Equal to operator

	cout << "z == x: " << (z == x) << endl;

	// Greater than operator

	cout << "z > x is: " << (z > x) << endl;

	// Lesser than operator

	cout << "z < x is: " << (z < x) << endl;

	// Lesser than or Equal to operator

	cout << "z <= x: " << (z <= x) << endl;

	// true

	cout << "z != x is: " << (z != x) << endl;

	// Logical operators
	// &&; Logical AND, ||; Logical OR, !; Logical NOT

	int f = 6, g = 4;

	// Logical AND operator

	cout << "f && g: " << (f && g) << endl;

	// Logical OR operator

	cout << "f || g: " << (f || g) << endl;

	// Logical NOT operator

	cout << "!g: " << (!g) << endl;

	return 0;

}
