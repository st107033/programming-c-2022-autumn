#include "Complex.h"


Complex Complex::conj() {
	return Complex(re, -im);
}

double Complex::abs() {
	return sqrt(re * re + im * im);
}

double Complex::arg() {
	return acos(re / abs());
}

Complex Complex::operator=(Complex& c) {
	this->re = c.re;
	this->im = c.im;
	return *this;
}

Complex Complex::operator+(double d) {
	return Complex(re + d, im);
}
Complex Complex::operator-(double d) {
	return Complex(re - d, im);
}
Complex Complex::operator/(double d) {
	return Complex(re/d, im/d);
}
Complex Complex::operator*(double d) {
	return Complex(re * d, im * d);
}

Complex operator+(double d, Complex c) {
	return Complex(c.re + d, c.im);
}
Complex operator-(double d, Complex c) {
	return Complex(d - c.re, -c.im);
}
Complex operator/(double d, Complex c) { 
	return Complex((d * c.re) / (c.abs() * c.abs()), (-d*c.im) / (c.abs() * c.abs()));
}
Complex operator*(double d, Complex c) {
	return Complex(c.re * d, c.im * d);
}

Complex Complex::operator+(Complex c) {
	return Complex(re + c.re, im + c.im);
}
Complex Complex::operator-(Complex c) {
	return Complex(re - c.re, im - c.im);
}
Complex Complex::operator/(Complex c) {
	return Complex((re * c.re + im * c.im) / (c.abs() * c.abs()), ( - re * c.im + im * c.re) / (c.abs() * c.abs()));
}
Complex Complex::operator*(Complex c) {
	return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
}

std::ostream& operator<<(std::ostream& stream, const Complex& c) {
	stream << "(" << c.re << ")" << "+" << "(" << c.im << ")*i";
	return stream;
}
