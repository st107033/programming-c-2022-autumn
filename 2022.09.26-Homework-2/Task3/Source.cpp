#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k >> m >> n;

	if (n <= k) {
		std::cout << 2 * m;
	}
	else if (2 * n % k == 0) {
		std::cout << m * (2 * n / k);
	}
	else {
		std::cout << ((2 * n / k) + 1) * m;
	}

	return EXIT_SUCCESS;
}