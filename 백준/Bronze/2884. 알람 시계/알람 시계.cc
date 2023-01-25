#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int h, m;
	int sum;
	cin >> h >> m;

	if (m - 45 < 0) {
		if (h == 0) {
			h = 23;
		}
		else {
			h -= 1;
		}
		m = 60+(m-45);
	}
	else {
		m = m - 45;
	}

	cout << h << ' ' << m;
	return 0;
}
