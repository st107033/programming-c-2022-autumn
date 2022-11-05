#include <iostream>

int main(int argc, char* argv[]) {
    const int N = 100000;
    bool c1[N]{ 0 };
    bool c2[N]{ 0 };
    int n1 = 0;
    int n2 = 0;

    std::cin >> n1 >> n2;

    for (int i = 0; i < n1; ++i) {
        int buf = 0;
        std::cin >> buf;
        c1[buf] = 1;
    }
    for (int i = 0; i < n2; ++i) {
        int buf = 0;
        std::cin >> buf;
        c2[buf] = 1;
    }

    for (int i = 0; i < N; ++i) {
        if ((c1[i] && c2[i]) == 1) {
            std::cout << i << " ";
        }
    }

    return EXIT_SUCCESS;
}