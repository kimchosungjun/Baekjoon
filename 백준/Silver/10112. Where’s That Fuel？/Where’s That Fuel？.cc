#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, const char argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,p;
	int ai, bi;
	vector<pair<int, int>>v;
	int sum = 0, count = 1;
	cin >> n >> p;
	for (int i = 1; i <= n; i++) {
		cin >> ai >> bi;
		if (i == p) {
			sum += ai;
		}
		else {
			v.push_back({ ai,bi });
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; i++) {
		if (v[i].first >= v[i].second && sum>=v[i].second) {
			sum += v[i].first-v[i].second;
			count++;
		}
	}
	cout << sum << '\n' << count;
	return 0;
}