#include <iostream>

int main(int argc, char* argv[]) {
	long x = 0;
	long c = 0;

	std::cin >> x;

	for (long i = 1, j = 1; x / i > 0; i *= 10, j*= 2) {
		c += j * ((x / i) % 10);
	}

	std::cout << c;

	return EXIT_SUCCESS;
}