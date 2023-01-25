#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	ll m,num,result=0;
	vector<ll>v;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	ll left = 0;
	ll right = v[n-1];
	while (left<=right) {
		ll sum = 0,ans=0;
		ll mid = (left + right) / 2;
		for (int i = 0; i < n; i++) {
			if (v[i] - mid > 0) {
				sum += v[i] - mid;
			}
		}
		if (sum >= m) {
			left = mid + 1;
			if (mid > result) {
				result = mid;
			}
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
	return 0;
}
