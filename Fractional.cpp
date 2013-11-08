#include "Fractional.h"
static int GreatCommonFactor(int num, int den)
{
//两个整数的最大公约数等于其中较小的数和两数的相除余数的最大公约数。
	if (den > num) {
		int temp = num;
		num = den;
		den = temp;
	}
	while (true) {
		int r = num % den;
		if (r == 0)
			return den;
		num = den;
		den = r;
	}
	return 1;
}
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

Fractional::Fractional(int num = 0, int den = 1) : numerator(num), denominator(den){}
void Fractional::operator=(const Fractional& rhs)
{
	numerator = rhs.numerator;
	denominator = rhs.denominator;
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
