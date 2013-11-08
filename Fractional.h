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

/*
istream& operator>>(istream& is, Fractional& rhs)
{
	int num;
	int den;
	char c;
	is >> num >> c >> den;
	rhs.numerator = num;
	rhs.denominator = den;
	return is;
}


ostream& operator<<(ostream& os, const Fractional& rhs)
{
	os << rhs.numerator << "/" << rhs.denominator;
	return os;
}

Fractional operator+(const Fractional& lhs, const Fractional &rhs)
{
	int num = lhs.numerator * rhs.denominator + lhs.denominator * rhs.numerator;
	int den = rhs.denominator * lhs.denominator;
	int GCF = GreatCommonFactor(num, den);
	num = num / GCF;
	den = den / GCF;
	
	Fractional ret(num, den);
	return ret;
}

Fractional operator-(const Fractional& lhs, const Fractional &rhs)
{
	int num = lhs.numerator * rhs.denominator - lhs.denominator * rhs.numerator;
	int den = rhs.denominator * lhs.denominator;
	int GCF = GreatCommonFactor(num, den);
	num = num / GCF;
	den = den / GCF;
	
	Fractional ret(num, den);
	return ret;
}
Fractional operator*(const Fractional& lhs, const Fractional &rhs)
{
	int num = lhs.numerator * rhs.numerator;
	int den = rhs.denominator * lhs.denominator;
	int GCF = GreatCommonFactor(num, den);
	num = num / GCF;
	den = den / GCF;
	
	Fractional ret(num, den);
	return ret;
}
Fractional operator/(const Fractional& lhs, const Fractional &rhs)
{
	int num = lhs.numerator * rhs.denominator; 
	int den = rhs.numerator * lhs.denominator;
	int GCF = GreatCommonFactor(num, den);
	num = num / GCF;
	den = den / GCF;
	
	Fractional ret(num, den);
	return ret;
}
*/
#endif
