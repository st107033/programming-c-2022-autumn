#include <iostream>

int main(int argc, char* argv) {
	int a = 0;
	int b = 0;
	int n = 0;

	std::cin >> a >> b;
	
	n = a * pow(b, -1);

	std::cout << n;

	return EXIT_SUCCESS;
}