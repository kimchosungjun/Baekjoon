#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,num,m;
	int total = 0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		total += num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cin >> m;
	
	if (total <= m) {
		cout << v[n - 1];
	}
	else {
		int mid,result = 0;
		int left = 1; 
		int right = v[n - 1];
		while (left <= right) {
			total = 0;
			mid = (left + right) / 2;
			for (int i = 0; i < n; i++) {
				if (mid >= v[i]) {
					total += v[i];
				}
				else {
					total += mid;
				}
			}
			if (total > m) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
				result = mid;
			}
		}
		cout << result;
	}
	return 0;
}
