#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<queue>
typedef long long ll;
#define setting	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[10] = { 0,0,1,7,4,2,0,8,10, };
ll dp[101];

int main() {
	setting;
	int t;
	dp[1] = 9, dp[2] = 1, dp[3] = 7, dp[4] = 4, dp[5] = 2, dp[6] = 6, dp[7] = 8, dp[8]=10;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		// 최소값 구하기
		for (int i = 9; i <= 100; i++) {
			dp[i] = dp[i - 2] * 10 + arr[2];
			for (int j = 3; j <= 7; j++) {
				dp[i] = min(dp[i], dp[i - j] * 10 + arr[j]);
			}
		}
		cout << dp[n] << ' ';

		// 최대값 구하기
		int cnt = n / 2;
		if (n % 2 == 1) {
			cout << 7;
			for (int i = 0; i < cnt - 1; i++) {
				cout << 1;
			}
		}
		else {
			for (int i = 0; i < cnt; i++) {
				cout << 1;
			}
		}
		cout << '\n';
	}
	return 0;
}