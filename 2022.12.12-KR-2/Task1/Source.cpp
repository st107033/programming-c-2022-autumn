#include <iostream>

void f(int position, int*& x0, int*& y0, int n, int k, int &counter_p);

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
    int counter = 0;

    std::cin >> n >> k;

    int* x0 = new int[n] {0};
    int* y0 = new int[n] {0};

    f(0, x0, y0, n, k, counter);

    std::cout << counter;

    delete[] x0;
    delete[] y0;

	return EXIT_SUCCESS;
}

void f(int position, int*& x0, int*& y0, int n, int k, int &counter_p) {
    int start = 0;

    if (position != 0) start = y0[position - 1] + 1;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            bool safe = 1;
            for (int i = 0; i < position; ++i) {
                int delta_y = abs(y0[i] - y - 1);
                int delta_x = abs(x0[i] - x - 1);
                if (((!delta_x || !delta_y) || (delta_x == delta_y) || (delta_x * delta_y)) == 2) {
                    safe = 0;
                    break;
                }
            }
            if (safe && (position < k - 1)) {
                x0[position] = x + 1;
                y0[position] = y + 1;
                f(position + 1, x0, y0, n, k, counter_p);
            }
            else counter_p++;
        }
    }
}