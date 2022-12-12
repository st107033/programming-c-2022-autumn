#include <iostream>

void f(int a, int b, std::string str);

int main(int argc, char* argv[]) {
	std::string str = "";

	std::cin >> str;

	f(0, str.length() - 1, str);

	return EXIT_SUCCESS;
}

void f(int a, int b, std::string str) {
	if (b - a <= 1) {
		std::cout << str[a];
		if (a != b) std::cout << str[b];
	}
	else {
		std::cout << str[a] << "(";
		f(a + 1, b - 1, str);
		std::cout << ")" << str[b];
	}
}