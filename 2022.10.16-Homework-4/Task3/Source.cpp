#include <iostream>

int main(int argc, char* argv[]) {
	long x = 0;
	long j = 0;
	long a = 1;

	std::cin >> x;

	for (long i = 0; i < x; i++) {
		std::cout << a << " ";
		j++;
		if (j == a) {
			a++;
			j = 0;
		}
	}

	return EXIT_SUCCESS;
}