#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 1000;
	int a[N]{ 0 };
	int n1 = 0;
	int n2 = 0;
	int i0 = 0;
	int j0 = 0;

	std::cin >> n1;
	for (int i = 0; i < n1; ++i) {
		std::cin >> a[i];
	}

	std::cin >> n2;
	for (int i = 0; i < n2; ++i) {
		std::cin >> i0 >> j0;
		for (int j = i0 - 1; j <= j0 - 1; ++j) {
			std::cout << a[j] << " ";
		}
		std::cout << "\n";
	}

	return EXIT_SUCCESS;
}