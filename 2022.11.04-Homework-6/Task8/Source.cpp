#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 100000;
	int a[N]{ 0 };
	int b[N]{ 0 };
	int k = 0;
	int n = 0;
	int l = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	std::cin >> k;

	k = k % n;
	for (int i = 0; i < n; ++i) {
		l = i + k;
		if (k + i >= n) {
			l = (k + i) % n;
		}
		if (k + i < 0) {
			l = n + k + i;
		}
		b[l] = a[i];
	}

	for (int i = 0; i < n; ++i) {
		std::cout << b[i] << " ";
	}

	return EXIT_SUCCESS;
}