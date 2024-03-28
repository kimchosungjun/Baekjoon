#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
int dp[1001][1001];

int main() {
	setting;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int num;
			cin >> num;
			dp[i][j] = num;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (dp[i - 1][j] > dp[i][j - 1]) {
				dp[i][j] += dp[i - 1][j];
			}
			else {
				dp[i][j] += dp[i][j-1];
			}
		}
	}
	cout << dp[n][m];
	return 0;
}