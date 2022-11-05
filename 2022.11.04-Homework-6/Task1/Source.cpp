#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 1000;
	int n = 0;
	int a[N]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	for (int i = n - 1; i >= 0; --i) {
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}