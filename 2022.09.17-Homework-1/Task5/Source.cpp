#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;

	ans = (n % 10) + ((n % 100) / 10) + (n / 100);
	cout << ans << endl;

	return 0;
}