#include <iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
