#include "Fractional.h"
#include <iostream>

using namespace std;


int main()
{
	Fractional a(3,1), b(2,4);
//	cin >> a;
//	cin >> b;
	a = a + b;

	cout << a << endl;

	return 1;
}
