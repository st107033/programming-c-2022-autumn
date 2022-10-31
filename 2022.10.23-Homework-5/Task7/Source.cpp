#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    int sum = 0;

    std::cin >> n;

    int* a = new int[n] {0};
    int* b = new int[n] {0};
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            if (a[i] > b[j]) {
                b[j] = a[i];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        sum += b[i];
    }
    delete[] a;
    delete[] b;

    std::cout << sum;

    return EXIT_SUCCESS;
}
