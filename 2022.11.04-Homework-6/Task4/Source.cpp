#include <iostream>

int main(int argc, char* argv[]) {
	const int N = 1000;
	int arr[N]{ 0 };
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int n = 0;

	std::cin >> n >> a >> b >> c >> d;

	for (int i = 0; i < n; ++i) {
		arr[i] = i + 1;
	}
	int l1 = b - a;
	for (int i = 0; i < n; ++i) {
		if ((a <= i + 1) && (i + 1 <= b) && (l1 > 0)) {
			arr[i] += arr[i + l1];
			arr[i + l1] = arr[i] - arr[i + l1];
			arr[i] = arr[i] - arr[i + l1];
			l1 -= 2;
		}
	}
	l1 = d - c;
	for (int i = 0; i < n; ++i) {
		if ((c <= i + 1) && (i + 1 <= d) && (l1 > 0)) {
			arr[i] += arr[i + l1];
			arr[i + l1] = arr[i] - arr[i + l1];
			arr[i] = arr[i] - arr[i + l1];
			l1 -= 2;
		}
	}

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}

	return EXIT_SUCCESS;
}