#include <iostream>

using namespace std;

void test() {
	
	//var is a static variable
	
	static int var = 0;
	
	++var;
	
	cout << var << endl;
	
}



void test1() {
	
	// var is an instance variable
	
	int var = 0;
	
	++var;
	
	cout << var << endl;
	
}

int main() {
	
	test();
	
	test();
	
	test1();
	
	test1();
	
	return 0;
}
