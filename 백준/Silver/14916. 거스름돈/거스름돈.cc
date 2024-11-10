#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include<cmath>
#include <cstring> // memset 사용
#define Max 100001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int dp[100001] = { 0, };

int main() {
    setting;
    int n;
    cin >> n;
    
    dp[1] = -1;
    dp[2] = 1;
    dp[3] = -1;
    dp[4] = 2;
    dp[5] = 1;

    for (int i = 6; i <= n; i++) {
        if (dp[i - 2] != -1 && dp[i - 5] != -1) {
            dp[i] = min(dp[i - 2], dp[i - 5]) + 1;
        }
        else if (dp[i - 2] == -1 && dp[i - 5] == -1) {
            dp[i] = -1;
        }
        else if (dp[i - 2] != -1 && dp[i - 5] == -1) {
            dp[i] = dp[i - 2] + 1;
        }
        else if (dp[i - 2] == -1 && dp[i - 5] != -1) {
            dp[i] = dp[i - 5] + 1;
        }
    }

    cout << dp[n];

    return 0;
}