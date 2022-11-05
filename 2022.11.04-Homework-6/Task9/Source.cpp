#include <iostream>

int main(int argc, char* argv[]) {
    const int N = 100;
    int a[N]{ 0 };
    int b[N]{ 0 };
    int n = 0;
    int sum = 0;

    std::cin >> n;
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

    std::cout << sum;

    return EXIT_SUCCESS;
}