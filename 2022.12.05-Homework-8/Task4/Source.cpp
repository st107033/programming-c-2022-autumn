#include <iostream>

int main(int argc, char* argv[]) {

	return EXIT_SUCCESS;
}

void hanoiTower(int n, int disc) {
	hanoiTower(n - 1, disc + 1);
	std::cout << disc << " to " 
}