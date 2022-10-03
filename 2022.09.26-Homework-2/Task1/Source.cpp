#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	std::cin >> n;

	x = n % 10;
	y = (n / 10) % 10;
	z = (n / 100) % 10;

	switch (z) {
	case 1:
		std::cout << "sto ";
		break;
	case 2:
		std::cout << "dvesti ";
		break;
	case 3:
		std::cout << "trista ";
		break;
	case 4:
		std::cout << "chetyrista ";
		break;
	case 5:
		std::cout << "pyatsot ";
		break;
	case 6:
		std::cout << "shestsot ";
		break;
	case 7:
		std::cout << "semsot ";
		break;
	case 8:
		std::cout << "vosemsot ";
		break;
	case 9:
		std::cout << "devyatsot ";
		break;
	}

	if (y == 1) {
		switch (x) {
		case 0:
			std::cout << "desyat ";
			break;
		case 1:
			std::cout << "odinnadtsat ";
			break;
		case 2:
			std::cout << "dvenadsat ";
			break;
		case 3:
			std::cout << "trinadsat ";
			break;
		case 4:
			std::cout << "chetyrnadsat ";
			break;
		case 5:
			std::cout << "pyatnadsat ";
			break;
		case 6:
			std::cout << "shestnadsat ";
			break;
		case 7:
			std::cout << "semnadsat ";
			break;
		case 8:
			std::cout << "vosemnadsat ";
			break;
		case 9:
			std::cout << "devyatnadsat ";
			break;
		}
		std::cout << "bananov";
	}
	else {
		switch (y) {
		case 2:
			std::cout << "dvatsat ";
			break;
		case 3:
			std::cout << "tridsat ";
			break;
		case 4:
			std::cout << "sorok ";
			break;
		case 5:
			std::cout << "pyatdesyat ";
			break;
		case 6:
			std::cout << "shestdesyat ";
			break;
		case 7:
			std::cout << "semdesyat ";
			break;
		case 8:
			std::cout << "vosemdesyat ";
			break;
		case 9:
			std::cout << "devyanosto ";
			break;
		}
		switch (x) {
		case 0:
			std::cout << "bananov";
			break;
		case 1:
			std::cout << "odin banan";
			break;
		case 2:
			std::cout << "dva banana";
			break;
		case 3:
			std::cout << "tri banana";
			break;
		case 4:
			std::cout << "chetyre banana";
			break;
		case 5:
			std::cout << "pyat bananov";
			break;
		case 6:
			std::cout << "shest bananov";
			break;
		case 7:
			std::cout << "sem bananov";
			break;
		case 8:
			std::cout << "vosem bananov";
			break;
		case 9:
			std::cout << "devyat bananov";
			break;
		}
	}

	return EXIT_SUCCESS;
}