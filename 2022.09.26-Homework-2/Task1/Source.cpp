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
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}

	if (y == 1) {
		switch (x) {
		case 0:
			std::cout << "������ ";
			break;
		case 1:
			std::cout << "����������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "����������� ";
			break;
		case 7:
			std::cout << "���������� ";
			break;
		case 8:
			std::cout << "������������ ";
			break;
		case 9:
			std::cout << "������������ ";
			break;
		}
		std::cout << "�������";
	}
	else {
		switch (y) {
		case 2:
			std::cout << "�������� ";
			break;
		case 3:
			std::cout << "�������� ";
			break;
		case 4:
			std::cout << "����� ";
			break;
		case 5:
			std::cout << "��������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "��������� ";
			break;
		case 8:
			std::cout << "����������� ";
			break;
		case 9:
			std::cout << "��������� ";
			break;
		}

		switch (x) {
		case 0:
			std::cout << "�������";
			break;
		case 1:
			std::cout << "���� �����";
			break;
		case 2:
			std::cout << "��� ������";
			break;
		case 3:
			std::cout << "��� ������";
			break;
		case 4:
			std::cout << "������ ������";
			break;
		case 5:
			std::cout << "���� �������";
			break;
		case 6:
			std::cout << "����� �������";
			break;
		case 7:
			std::cout << "���� �������";
			break;
		case 8:
			std::cout << "������ �������";
			break;
		case 9:
			std::cout << "������ �������";
			break;
		}
	}

	return EXIT_SUCCESS;
}