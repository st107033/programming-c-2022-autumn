#include <iostream>
using namespace std;

int main() {
	int h1, h2, m1, m2, s1, s2, t1, t2;

	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	
	t1 = 3600 * h1 + 60 * m1 + s1;
	t2 = 3600 * h2 + 60 * m2 + s2;

	cout << endl << t2 - t1 << endl;

	return 0;
}