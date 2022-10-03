#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int mx = 0;
	int md = 0;
	int mn = 0;

	std::cin >> a >> b >> c;

	a <= b ? (mx = b, md = a) : (mx = a, md = b); 
	mx <= c ? (mn = md, md = mx, mx = c) : md <= c ? (mn = md, md = c) : mn = c;

	if (md + mn <= mx) {
		std::cout << "impossible";
	}
	else {
		if (mx * mx > mn * mn + md * md) std::cout << "obtuse";
		if (mx * mx < mn * mn + md * md) std::cout << "acute";
		if (mx * mx == mn * mn + md * md) std::cout << "right";
	}

	return EXIT_SUCCESS;
}