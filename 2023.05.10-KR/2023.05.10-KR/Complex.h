#pragma once
#include <ostream>
#include <cmath>

class Complex {
private:
	double re;
	double im;
public:
	Complex(double re = 0, double im = 0) : re(re), im(im) {};
	Complex(const Complex& c) : re(c.re), im(c.im) {};
	~Complex() {}

	Complex conj();
	double arg();
	double abs();

	Complex operator=(Complex& c);

	Complex operator+(double d);
	Complex operator-(double d);
	Complex operator/(double d);
	Complex operator*(double d);

	friend Complex operator+(double d, Complex c);
	friend Complex operator-(double d, Complex c);
	friend Complex operator/(double d, Complex c);
	friend Complex operator*(double d, Complex c);

	Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator/(Complex c);
	Complex operator*(Complex c);

	friend std::ostream& operator<<(std::ostream& stream, const Complex& c);

};