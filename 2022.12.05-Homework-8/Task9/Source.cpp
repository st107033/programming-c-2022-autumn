#include <iostream>

void f(int a, int b, std::string str);

int main(int argc, char* argv[]) {
	std::string str = "";

	std::cin >> str;

	f(0, str.length() - 1, str);

	return EXIT_SUCCESS;
}

void f(int a, int b, std::string str) {
	if (b - a > 0) {
		if (str[a] != str[b]) std::cout << str[a];
		f(a + 1, b - 1, str);
		if (str[a] != str[b]) std::cout << str[b];
	}
}