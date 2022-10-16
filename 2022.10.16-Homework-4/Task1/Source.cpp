#include <iostream>

int main(int argc, char* argv[]) {
	long x = 0;
	int c = 0;

	std::cin >> x;

	for (long i = 1; i * i <= x; i++) {
		c += (x % i == 0) * (1 + (i * i != x));
	}

	std::cout << c;

	return EXIT_SUCCESS;
}