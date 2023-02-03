#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<stack>

#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 1e9 + 7;

int t[10010];
int w[1010];
int dp[1010][10010];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> w[i] >> t[i];
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < t[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - t[i]] + w[i]);
		}
	}
	cout << dp[k][n];
	return 0;
}