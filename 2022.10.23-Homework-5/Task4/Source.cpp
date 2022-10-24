#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int ans = 0;
	int sum = 0;

	std::cin >> n;

	int* a = new int[n]{0};
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		sum = a[i] + a[(i + 1) % n] + a[(i + 2) % n];
		if (ans < sum) {
			ans = sum;
		}
	}
	delete[] a;

	std::cout << ans;

	return EXIT_SUCCESS;
}