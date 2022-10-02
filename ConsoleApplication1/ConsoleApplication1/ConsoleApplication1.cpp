#include <iostream>
#include "windows.h"

using namespace std;

void gotoxy(int x, int y) {
	HANDLE hConsole;
	COORD cursorLoc;
	std::cout.flush();
	cursorLoc.X = x;
	cursorLoc.Y = y;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, cursorLoc);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c = 1;
	for (int x = a; x <= b; x++) {
		double y = x + 2;
		gotoxy(y,x);
		cout << "*";
		//string str;
		//for (double i = -10; i < 10; i += 0.1) {
		//	/*if (abs(i - y) <= 0.5) str.push_back('*');
		//	else str.push_back(' ');*/
		//}
	}
	gotoxy(0,30);
}
