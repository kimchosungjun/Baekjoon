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

int dp[10001];
int coin[21];
int n, m;

int main() {
	int t;
	cin >> t;
	while (t) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> coin[i];
		}
		cin >> m;
		dp[0] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = coin[i]; j <= m; j++) {
				dp[j] = dp[j] + dp[j - coin[i]];
			}
		}
		cout << dp[m] << '\n';
		memset(dp, 0, sizeof(dp));
		t -= 1;
	}
}