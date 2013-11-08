#include "Fractional.h"
#include <iostream>

using namespace std;


int main()
{
	Fractional a(3,2), b(2,3);
//	cin >> a;
//	cin >> b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	Fractional c = a + b;	
	cout << c << endl;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	c = a - b;	
	cout << c << endl;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	c = a * b;	
	cout << c << endl;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	c = a / b;	
	cout << c << endl;
	return 1;
}
