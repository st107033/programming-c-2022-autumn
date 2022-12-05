#include <iostream> 

int main(int argc, char* argv[]) {
	int n = 0;
	
	std::cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i) {
		a[i] = new int[n];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			int buf = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = buf;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << a[i][j] << " ";
		}
		std::cout << "\n";
	}
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;
}