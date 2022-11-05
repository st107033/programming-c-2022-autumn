#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 100000;
	int a[N]{ 0 };
	int n = 0;
	int minn = 100000;
	int ind = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i) {
		if (minn > a[i]) {
			minn = a[i];
			ind = i;
		}
	}

	for (int i = ind; i < n + ind; ++i) {
		std::cout << a[i % n] << " ";
	}

	return EXIT_SUCCESS;
}