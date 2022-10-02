#include <iostream>

int main(int argc, char* argv) {
	int a = 0;
	int b = 0;
	int n = 0;

	std::cin >> a >> b;
	
	n = a + (a - b < 0) * (b - a);

	std::cout << n;

	return EXIT_SUCCESS;
}