#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define Max 1000000001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int n;
int input[1001] = { 0, };
int dp[1001] = { 0, };

int res = -1;

int main() {
    setting;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = input[i];
        for (int k = 0; k < i; k++) {
            if (input[k] < input[i]) dp[i] = max(dp[i], dp[k] + input[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        res = max(res, dp[i]);
    }

    cout << res;
    return 0;
}

