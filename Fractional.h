#ifndef FRACTIONAL_H_
#define FRACTIONAL_H_

#include <iostream>
#include <sstream>
#include <ostream>
#include <istream>
using std::cout;
using std::endl;
using std::cin;
using std::istream;
using std::ostream;
class Fractional {
public:
	Fractional(int, int);
	Fractional(void){}
	void operator=(const Fractional&);
	/* we have to manipulate the private members, that's how friend comes */
	friend istream& operator>>(istream&, Fractional&);
	friend ostream& operator<<(ostream&, const Fractional&);
	friend Fractional operator+(const Fractional&, const Fractional&);
	friend Fractional operator-(const Fractional&, const Fractional&);
	friend Fractional operator*(const Fractional&, const Fractional&);
	friend Fractional operator/(const Fractional&, const Fractional&);

private:
	int numerator;
	int denominator;

};

#endif
