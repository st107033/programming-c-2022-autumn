#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;

	ans = n + 2 - (n % 2);
	cout << ans << endl;

	return 0;
}