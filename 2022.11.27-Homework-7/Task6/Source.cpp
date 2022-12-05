#include <iostream> 

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** a = new int* [n];
	int** b = new int* [n];
	for (int i = 0; i < n; ++i) {
		a[i] = new int[m];
		b[i] = new int[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] += b[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << a[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < n; ++i) {
		delete[] a[i];
		delete[] b[i];
	}
	delete[] a;
	delete[] b;

	return EXIT_SUCCESS;
}