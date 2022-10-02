#include <iostream>

int main(int argc, char* argv) {

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	if ((a == b) && (a == 0)) {
		std::cout << "INF";
	}
	else {
		if ((a != 0) && (b % a == 0) && (a * d != b * c)) {
			std::cout << -b / a;
		}
		else {
			std::cout << "NO";
		}
	}

	return EXIT_SUCCESS;
}