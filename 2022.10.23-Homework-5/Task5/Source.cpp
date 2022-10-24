#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    int x = 0;
    int dif = 100000000;
    int minn = 100000000;
    int ans = 0;

    std::cin >> n;

    int* a = new int[n] {0};
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cin >> x;

    for (int i = 0; i < n; ++i) {
        if (a[i] - x == 0) {
            ans = a[i];
            break;
        }
        else if (dif >= abs(a[i] - x)) {
            if ((dif == abs(a[i] - x)) && (minn > a[i] - x)) {
                ans = a[i];
                minn = a[i] - x;
            }
            else if (dif > abs(a[i] - x)) {
                ans = a[i];
                minn = a[i] - x;
                dif = abs(a[i] - x);
            }
        }
    }
    delete[] a;

    std::cout << ans;

    return EXIT_SUCCESS;
}