#include <iostream>

int main(int argc, char* argv) {

	setlocale(LC_ALL, "Russian");

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
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыреста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}

	if (y == 1) {
		switch (x) {
		case 0:
			std::cout << "десять ";
			break;
		case 1:
			std::cout << "одиннадцать ";
			break;
		case 2:
			std::cout << "двенадцать ";
			break;
		case 3:
			std::cout << "тринадцать ";
			break;
		case 4:
			std::cout << "четырнадцать ";
			break;
		case 5:
			std::cout << "пятнадцать ";
			break;
		case 6:
			std::cout << "шестнадцать ";
			break;
		case 7:
			std::cout << "семнадцать ";
			break;
		case 8:
			std::cout << "восемнадцать ";
			break;
		case 9:
			std::cout << "девятнадцать ";
			break;
		}
		std::cout << "бананов";
	}
	else {
		switch (y) {
		case 2:
			std::cout << "двадцать ";
			break;
		case 3:
			std::cout << "тридцать ";
			break;
		case 4:
			std::cout << "сорок ";
			break;
		case 5:
			std::cout << "пятьдесят ";
			break;
		case 6:
			std::cout << "шестьдесят ";
			break;
		case 7:
			std::cout << "семьдесят ";
			break;
		case 8:
			std::cout << "восемьдесят ";
			break;
		case 9:
			std::cout << "девяносто ";
			break;
		}

		switch (x) {
		case 0:
			std::cout << "бананов";
			break;
		case 1:
			std::cout << "один банан";
			break;
		case 2:
			std::cout << "два банана";
			break;
		case 3:
			std::cout << "три банана";
			break;
		case 4:
			std::cout << "четыре банана";
			break;
		case 5:
			std::cout << "пять бананов";
			break;
		case 6:
			std::cout << "шесть бананов";
			break;
		case 7:
			std::cout << "семь бананов";
			break;
		case 8:
			std::cout << "восемь бананов";
			break;
		case 9:
			std::cout << "девять бананов";
			break;
		}
	}

	return EXIT_SUCCESS;
}