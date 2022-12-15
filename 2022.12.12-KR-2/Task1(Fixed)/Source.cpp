#include <iostream>

void f(int** arr, int n, int b, int a);

int main(int argc, char* argv[]) {
    int n = 0;

    std::cin >> n;

    int** a = new int* [n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = n * i + j + 1;
        }
    }

    f(a, n, 0, 1);

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

void f(int** arr, int n, int b, int a) {
    int i = 0;
    int j = 0;
    if (b < n / 2 + (n & 1 ? 1 : 0)) {
        for (j = b; j < n - b; ++j) {
            arr[b][j] = a++;
        }
        j -= 2;
        for (i = b + 1; i < n - b; ++i) {
            arr[i][n - b - 1] = a++;
        }
        i -= 1;
        for (j = j; j >= b; j -= 1) {
            arr[i][j] = a++;
        }
        j++;
        i -= 1;
        for (i = i; i >= b + 1; i -= 1) {
            arr[i][j] = a++;
        }
        f(arr, n, b + 1, a);
    }
}
