#include <iostream>

void f(int a, int n);

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	f(2, n);

	return EXIT_SUCCESS;
}

void f(int a, int n) {
	if (a * a <= n) {
		if (n % a != 0) f(a + 1, n);
		else std::cout << "composite";
	}
	else std::cout << "prime";
}