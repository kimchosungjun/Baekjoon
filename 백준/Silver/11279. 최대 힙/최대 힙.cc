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
		int x;
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				cout << '0'<<'\n';
			}
			else {
				int res=pq.top();
				cout << res<<'\n';
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}
	return 0;
}