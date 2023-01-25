#include <iostream>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main() {
	setting;
	int t,a, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #"<<i<<": "<< a << " + " << b << " = " << a + b << '\n';
	}
	return 0;
}