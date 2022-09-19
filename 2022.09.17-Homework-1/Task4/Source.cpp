#include <iostream>

int main(int argc, char* argv) {
	int s = 109;
	int v = 0;
	int t = 0;
	int ans = 0;

	std::cin >> v >> t;

	ans = (s + ((v * t) % s)) % s;

	std::cout << ans << std::endl;

	return EXIT_SUCCESS;
}