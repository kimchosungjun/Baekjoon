#include <iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include <cmath>
typedef long long int ll;
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

priority_queue<int>pq;

int main() {
	setting;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int pres;
		cin >> pres;
		if (pres == 0) {
			if (pq.empty()) {
				cout << -1 << '\n';
			}
			else {
				int res = pq.top();
				cout << res << '\n';
				pq.pop();
			}
		}
		else {
			for (int i = 0; i < pres; i++) {
				int w;
				cin >> w;
				pq.push(w);
			}
		}
	}
	
	return 0;
}