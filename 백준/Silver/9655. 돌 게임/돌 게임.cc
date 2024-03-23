#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int arr[1001] = { 0, };

int main() {
	setting;

	int n;
	cin >> n;
	// 상근 = 0, 창영 = 1
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 0;
	for (int i = 4; i <= n; i++) {
		if (arr[i - 3] == 0) {
			arr[i] = 1;
		}
		else if (arr[i - 3] == 1) {
			arr[i] = 0;
		}
	}
	if (arr[n] == 0) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
	return 0;
}