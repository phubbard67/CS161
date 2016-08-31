// Paul Hubbard HW 1

#include "main.h"
using namespace std;
int main(int argc, char **argv) { 
	long int varLong = 0;
	short int si = 0;
	string varString;
	long double varLongD = 0;

	cout << "Enter a long integer value: ";
	cin >> varLong;

	cout << "Address of var: " << &varLong << endl; //shows address
	cout << "Size of var: " << sizeof(varLong) << endl; // shows size in bytes
	cout << "Contents of var: " << varLong << endl; // contents of var
	cout << "Max size of var: " << numeric_limits<long int>::max() << endl; //shows max size of var
	
	cout << "Enter in a short integer value: ";
	cin >> si;

	cout << "Address of var: " << &si << endl; 
	cout << "Size of var: " << sizeof(si) << endl;
	cout << "Contents of of var: " << si << endl;
	cout << "Min size of var: " << numeric_limits<short int>::min() << endl << endl;

	cin.ignore(); //necessary in order to use the cin>> and get line together.	

	cout << "Enter in a full line string value: ";
	getline (cin,varString);

	cout << "Address of var: " << &varString << endl;
	cout << "Size of var: " << sizeof(varString) << endl;
	cout << "Contents of var: " << varString << endl;

	cout << "Enter in a decimal fraction: ";
	cin >> varLongD;

	cout << "Address of var: " << &varLongD << endl;
	cout << "Size of var: " << sizeof(varLongD) << endl;
	cout << "Contents of var: " << varLongD << endl;
	cout << "Number of digits supported: " << numeric_limits<long double>::digits10 << endl; //gets the number of digits supported for floats. 

	cout << "Paul Hubbard HW 1" << endl;

	
	return 0;	
}
