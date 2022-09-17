#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int a = x * x;
	int ans = a * (a + x + 1) + x + 1;

	cout << ans << endl;

	return 0;
}