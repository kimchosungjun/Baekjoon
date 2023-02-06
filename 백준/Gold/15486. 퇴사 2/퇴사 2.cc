#include <iostream>
#define FIO ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL) 
using namespace std;

int dp[1500010];
int t[1500010];
int p[1500010];
int main() {
	FIO;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}
	for (int i = n; i > 0; i--) {
		if (t[i] > n - i + 1)
			dp[i] = dp[i + 1];
		else
			dp[i] = max(dp[i + 1], dp[i + t[i]] + p[i]);
	}
	cout<<dp[1];
	return 0;
}