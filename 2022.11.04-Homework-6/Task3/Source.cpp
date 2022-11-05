#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 1000;
	int n = 0;
	int a[N]{ 0 };
	int x = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	std::cin >> x;

	int ans = n + 1;
	for (int i = 0; i < n; ++i) {
		if (a[i] < x) {
			ans = i + 1;
			break;
		}
	}

	std::cout << ans;

	return EXIT_SUCCESS;
}