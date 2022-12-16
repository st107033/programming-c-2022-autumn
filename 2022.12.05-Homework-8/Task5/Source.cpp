#include <iostream>

void f(int a);

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	f(n - 1);

	return EXIT_SUCCESS;
}

void f(int a) {
	if (a % 3 == 0) std::cout << "YES";
	else {
		if (a < 5) std::cout << "NO";
		else f(a - 5);
	}
}