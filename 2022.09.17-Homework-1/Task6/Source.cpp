#include <iostream>

int main(int argc, char* argv) {
	int n = 0;
	int ans = 0;

	std::cin >> n;

	ans = n + 2 - (n % 2);

	std::cout << ans;

	return EXIT_SUCCESS;
}