#include <iostream>
#include "Complex.h"


int main(int argc, char* argv[]) {
	Complex c(1, 2);
	Complex z(3, 2);
	Complex n = c / z;

	std::cout << "c = " << c << "\n" << "z = " << z << "\n";
	std::cout << "c + 8 = " << c + 8 << "\n";
	std::cout << "c - 8 = " << c - 8 << "\n";
	std::cout << "8 - c = " << 8 - c << "\n";
	std::cout << "8 + c = " << 8 + c << "\n";
	std::cout << "c / 8 = " << c / 8 << "\n";
	std::cout << "8 / c = " << 8 / c << "\n";
	std::cout << "8 * c = " << 8 * c << "\n";
	std::cout << "c * 8 = " << c * 8 << "\n";
	std::cout << "c / z = n = " << n << "\n";
	std::cout << "arg(c) = " << c.arg() << "\n";
	std::cout << "|c| = " << c.abs() << "\n";

	return EXIT_SUCCESS;
}