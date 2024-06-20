#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#define Setting 	cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
using namespace std;

#pragma region  변수

int n;
int pi[1001];
int dp[1001];

#pragma endregion



void Input() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> pi[i];
		dp[i] = pi[i];
	}
}

void Solve() {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			dp[i] = (dp[i] <= dp[i - k] + pi[k]) ? dp[i] : dp[i - k] + pi[k];
		}
	}
	cout << dp[n]<<endl;
}

int main() {
	Setting;
	Input();
	Solve();
	return 0;
}