#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	double x = 1;
	double c = 1;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		x = x / i;
		c += x;
	}

	std::cout << c;

	return EXIT_SUCCESS;
}