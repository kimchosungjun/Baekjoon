#include <iostream>
using namespace std;

int main() {
	int a, b,c;
	cin >> a >> b;
	cin >> c;
	int min = b + c;
	if (min >= 60) {
		while (min >= 60) {
			min = min - 60;
			a++;
			if (a == 24) {
				a = 0;
			}
		}
	}

	cout << a << ' ' << min;
	return 0;
}