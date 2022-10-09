#include <iostream>

int main(int argc, char* argv[]) {
	int a = 1;
	int c = 0;

	while (a != 0) {
		std::cin >> a;
		if ((a < 0) && (a % 2 != 0)) {
			c++;
		}
	}

	std::cout << c;

	return EXIT_SUCCESS;
}