#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	//입력
	int n, k;
	ll left, mid, right=0;
	ll arr[10000];
	cin >> n >> k;
	for (int i = 0; i < n; i++) { 
		cin >> arr[i];
		right = max(right, arr[i]);
	}
	// 정렬
	left = 1;
	// 알고리즘
	while (true) {
		mid = (left + right) / 2;
		if (left > right) {
			cout << mid;
			break;
		}
		ll count = 0;
		for (int i = 0; i < n; i++) {
			count += arr[i] / mid;
		}
		if (count >= k) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 0;
}
