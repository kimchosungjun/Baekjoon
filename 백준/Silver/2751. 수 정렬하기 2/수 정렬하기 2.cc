#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, const char argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,num;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
	return 0;
}