#include <iostream>

struct Point {
	int x;
	int y;

	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& p) : x(p.x), y(p.y) {}
	~Point() {}
};

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;

	Point** arr = new Point * [n];

	for (int i = 0; i < n; ++i) {
		arr[i] = new Point;
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i]->x >> arr[i]->y;
	}

	for (int i = 0; i < n; ++i) {
		bool f = 1;

		for (int j = 0; j < n - i - 1; ++j) {
			int l1 = arr[j]->x * arr[j]->x + arr[j]->y * arr[j]->y;
			int l2 = arr[j + 1]->x * arr[j + 1]->x + arr[j + 1]->y * arr[j + 1]->y;

			if (l1 > l2) {
				std::swap(arr[j]->x, arr[j + 1]->x);
				std::swap(arr[j]->y, arr[j + 1]->y);
				f = 0;
			}
		}
		if (f == 1) break;
	}

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i]->x << " " << arr[i]->y << "\n";
	}

	for (int i = 0; i < n; ++i) {
		delete arr[i];
	}
	delete[] arr;

	return EXIT_SUCCESS;
}