#include <iostream>
using namespace std;

int main() {
	int s = 109, v, t, ans;
	cin >> v >> t;

	if (v > 0) ans = (v * t) % s;
	else ans = s + ((v * t) % s);

	cout << ans << endl;
	return 0;
}