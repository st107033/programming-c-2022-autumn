#include <iostream>

int main(int argc, char* argv) {
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	int s1 = 0;
	int s2 = 0;
	int t1 = 0;
	int t2 = 0;

	std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	
	t1 = 3600 * h1 + 60 * m1 + s1;
	t2 = 3600 * h2 + 60 * m2 + s2;

	std::cout << t2 - t1 << std::endl;

	return EXIT_SUCCESS;
}