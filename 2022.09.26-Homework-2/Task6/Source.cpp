#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int y = 0;
	int x1 = 0;
	int y1 = 0;

	std::cin >> x >> y >> x1 >> y1;

	if ((x == x1) || (y == y1) || ((y1 - y) * (y1 - y) == (x1 - x) * (x1 - x))) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}