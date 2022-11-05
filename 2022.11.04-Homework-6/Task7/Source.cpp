#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 1000;
	int a[N]{ 0 };
	int n = 0;
	int minn = 10000;
	int maxn = -10000;
	int ans1 = 0;
	int ans2 = 1;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		if (a[i] > maxn) {
			maxn = a[i];
		}
		if (a[i] < minn) {
			minn = a[i];
		}
		if (a[i] > 0) {
			ans1 += a[i];
		}
	}

	bool f = 0;
	for (int i = 0; i < n; ++i) {
		if ((a[i] == minn) || (a[i] == maxn)) {
			f = !f;
		}
		if ((a[i] != minn) && (a[i] != maxn) && (f == 1)) {
			ans2 *= a[i];
		}
	}

	std::cout << ans1 << " " << ans2;

	return EXIT_SUCCESS;
}