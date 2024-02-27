#include<iostream>
#include<algorithm>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main() {
	int n;
	cin >> n;

	int dp[1001] = {0,};
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= 10007;
	}
	cout << dp[n];

	return 0;
}