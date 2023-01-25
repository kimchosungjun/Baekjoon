#include <iostream>

#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main() {
	setting;
	int a, b;
	bool going = true;
	while (going) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			going = false;
		}
		else {
			cout << a + b<<'\n';
		}
	}
	return 0;
}