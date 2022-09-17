#include <iostream>
using namespace std;

int main() {
	int a, b, n = 0;
	cin >> a >> b;
	while (a > 0) {
		n++;
		a /= b;
	}
	cout << n << endl;
}