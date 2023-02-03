#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define setting ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 1e9 + 7;

int n, k;
int w[110], value[110], dp[110][100010];

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> value[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + value[i]);
		}
	}
	cout << dp[n][k];
	return 0;
}