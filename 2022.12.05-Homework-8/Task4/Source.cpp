#include <iostream>

void hanoiTower(int disk, int from, int to);

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	hanoiTower(n, 1, 2);

	return EXIT_SUCCESS;
}

void hanoiTower(int disk, int from, int to) {
	if (disk <= 0) return;
	int buf = 6 - from - to;
	hanoiTower(disk - 1, from, buf);
	std::cout << "Disk " << disk << " move from " << from << " to " << to << "\n";
	hanoiTower(disk - 1, buf, to);
}