#include <iostream>

char f(int a, char num, std::string str, int length);

int main(int argc, char* argv[]) {
	std::string str = "";

	std::cin >> str;

	int length = str.length();

	std::cout << f(0, '0', str, length);

	return EXIT_SUCCESS;
}

char f(int a, char num, std::string str, int length) {
	if (a < length) {
		if (num < str[a]) return f(a + 1, str[a], str, length);
		else return f(a + 1, num, str, length);
	}
	return num;
}