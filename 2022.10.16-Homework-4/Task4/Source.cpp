#include <iostream>

int main(int argc, char* argv[]) {
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	long e = 0;
	int n = 0;

	std::cin >> a >> b >> c >> d >> e;

	for (int x = 0; x <= 1000; x++) {
		if ((x != e) && (a * x * x * x + b * x * x + c * x + d == 0)) {
			n++;
		}
	}

	std::cout << n;

	return EXIT_SUCCESS;
}