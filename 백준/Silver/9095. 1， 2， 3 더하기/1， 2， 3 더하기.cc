#include<iostream>
#include<vector>
#define setting ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int dp[11];

int main() {
    setting;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;
    int n;
    cin >> n;
    for (int i = 5; i <=11; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cout << dp[num]<<'\n';
    }
    ;
    return 0;
}