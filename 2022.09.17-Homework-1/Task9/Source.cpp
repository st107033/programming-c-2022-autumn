#include <iostream>

int main(int argc, char* argv) {
	int x = 0;
	int a = 0;
	int ans = 0;

	std::cin >> x;

	a = x * x;
	ans = a * (a + x + 1) + x + 1;

	std::cout << ans;

	return EXIT_SUCCESS;
}