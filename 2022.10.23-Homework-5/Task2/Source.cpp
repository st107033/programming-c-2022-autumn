#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int l = 0;
	int r = 0;
	int ans1 = -1001;
	int ans2 = 0;

	std::cin >> n;

	int* a = new int[n]{0};
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (int i = l; i <= r; ++i) {
		if (ans1 < a[i - 1]) {
			ans1 = a[i - 1];
			ans2 = i;
		}
	}
	delete[] a;

	std::cout << ans1 << " " << ans2;

	return EXIT_SUCCESS;
}