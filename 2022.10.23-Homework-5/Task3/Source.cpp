#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int maxn = 0;
	int minn = 1000;
	
	std::cin >> n;
	
	int* a = new int[n]{0};
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		if (a[i] > maxn) {
			maxn = a[i];
		}
		if (a[i] < minn) {
			minn = a[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] == maxn) {
			std::cout << minn << " ";
		}
		else {
			std::cout << a[i] << " ";
		}
	}
	delete[] a;

	return EXIT_SUCCESS;
}