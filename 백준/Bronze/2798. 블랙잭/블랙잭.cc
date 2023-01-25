#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int>v;

int main() {
	int n, m;
	int near = -1;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int sum = v[i] + v[j] + v[k];
				if (sum == m) {
					cout << m;
					return 0;
				}
				else if(sum<m) {
					if (sum > near)
						near = sum;
				}
			}
		}
	}
	cout << near;
	return 0;
}
