#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {
	setting;
	int t = 0;
	int n, m;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long int res = 1;
		int r = 1;
		cin >> n >> m;
		for (int j = m; j > m - n; j--) {
			res = res * j;
			res = res / r;
			r++;
		}
		cout << res << "\n";
	}
	return 0;
}