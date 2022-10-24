#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	double maxn = -10000000;
	int ans = 1;

	std::cin >> n;

	int* a = new int[n] {0};
	int* b = new int[n] {0};
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> b[i];
	}
	for (int i = 0; i < n; ++i) {
		double x = 0;
		if (b[i] != 0) {
			x = a[i] * b[i] / 100.0;
		}
		if (x > maxn) {
			ans = i + 1;
			maxn = x;
		}
	}
	delete[] a;
	delete[] b;

	std::cout << ans;

	return EXIT_SUCCESS;
}