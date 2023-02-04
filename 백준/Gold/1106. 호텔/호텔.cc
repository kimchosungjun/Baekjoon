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

int cost[21], customer[21];
int dp[101000];
int c, n;

int main() {
	cin >> c >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cost[i] >> customer[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 100001; j++) {
			if(j>=cost[i])
				dp[j] = max(dp[j], dp[j - cost[i]] + customer[i]);
		}
	}
	for (int i = 1; i <= 100001; i++) {
		if (dp[i] >= c) {
			cout << i;
			return 0;
		}	
	}
}