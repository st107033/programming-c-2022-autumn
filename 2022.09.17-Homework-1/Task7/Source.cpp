#include <iostream>

int main(int argc, char* argv) {
	int a = 0; 
	int b = 0;

	std::cin >> a >> b;

	a += b;
	b = a - b;
	a = a - b;

	std::cout << a << " " << b;

	return EXIT_SUCCESS;
}