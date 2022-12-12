#include <iostream>

void f(int*& a, int i);

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	f(a, n - 1);

	delete[] a;

	return EXIT_SUCCESS;
}

void f(int *&a, int i) {
	if (i >= 0) {
		std::cout << a[i] << " ";
		f(a, i - 1);
	}
}