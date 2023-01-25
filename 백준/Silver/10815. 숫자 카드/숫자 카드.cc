#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
vector<ll>v;

int find(int left, int right, ll key) {
	int mid = (left + right) / 2;
	if (left > right) {
		return 0;
	}
	if (v[mid] == key) {
		return 1;
	}
	else if (v[mid] > key) {
		return find(left, mid - 1, key);
	}
	else {
		return find(mid+1, right, key);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int n,m;
	ll num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout<<find(0, n-1, num)<<' ';
	}
	return 0;
}