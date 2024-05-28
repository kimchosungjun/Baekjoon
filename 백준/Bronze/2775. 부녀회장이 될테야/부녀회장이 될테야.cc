#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llt long long int
using namespace std;

// 1577번

#pragma region Variable
int t;
int k, n; // k층의 n호
int dp[16][16];
#pragma endregion

void Solve() {
	for (int i = 0; i < 16; i++) {
		dp[0][i] = i;
	}

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = dp[i][j-1] + dp[i - 1][j];
		}
	}
	cout << dp[k][n]<<endl;
}

void Input() {
	cin >> t;
	while (t != 0) {
		t -= 1;
		cin >> k;
		cin >> n;
		Solve();
	}
}



int main() {
	setting;
	Input();
	//Solve();
	return 0;
}