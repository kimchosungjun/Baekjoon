#include<iostream>
#include<vector>
#include<algorithm>

#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

vector<int>v;

// 3273번

int main() {
	int num, a, target;
	cin >> num;
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> a;
		v.push_back(a);
	}
	cin >> target;
	sort(v.begin(), v.end());
	int l = 0, r = num - 1, cnt = 0;

	while (true) {
		if (l >= r)
			break;
		int sum = v[l] + v[r];
		if (sum == target) {
			cnt++;
			l++;
			r--;
		}
		else if (sum < target)
			l++;
		else
			r--;
	}
	cout << cnt;
	return 0;
}