#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 100;
	int a[N]{ 0 };
	int n = 0;
	int c1 = 0;
	int c2 = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] % 2 != 0) {
			std::cout << a[i] << " ";
			++c1;
		}
	}
	std::cout << "\n";
	for (int i = 0; i < n; ++i) {
		if (a[i] % 2 == 0) {
			std::cout << a[i] << " ";
			++c2;
		}
	}
	std::cout << "\n";
	if (c2 >= c1) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}