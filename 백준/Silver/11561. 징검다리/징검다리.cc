#include <iostream>
using namespace std;
typedef unsigned long long llt;

llt bridge(llt num) {
	llt left = 1;
	llt right = num;
	llt result = 0;
	while (left <= right) {
		llt mid = (left + right) / 2;
		if (mid * (mid + 1) <= 2*num) {
			if (result < mid) {
				result = mid;
			}
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}	
	return result;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	llt n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << bridge(n) << '\n';
	}
	return 0;
}