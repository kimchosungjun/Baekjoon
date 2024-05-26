#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llt long long int
using namespace std;

// 백준 14502 완전탐색 + BFS
// 백준 1018
// 백준 5525 부분점수 : 50점

#pragma region Variable
int n;
int arr[1005];
int dp[1005];
int maxi = 0;
#pragma endregion


void Input() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = 1;
	}
}

void Solve() {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j >= 1; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = (dp[i] > dp[j]) ? dp[i] : dp[j] + 1;
			}
		}
		maxi = dp[i] > maxi ? dp[i] : maxi;
	}
	cout << maxi<<"\n";
}

int main() {
	setting;
	Input();
	Solve();
	return 0;
}