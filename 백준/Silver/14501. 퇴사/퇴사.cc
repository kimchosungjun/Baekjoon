#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int ti[20],pi[20];
    int dp[20]={0,};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> ti[i] >> pi[i];
    }

    for (int i = n; i > 0; i--) {
        if (ti[i] > n -i + 1) {
            dp[i] = dp[i + 1];
        }
        else {
            dp[i] = max(dp[i + 1], dp[i+ti[i]] + pi[i]);
        }
    }
    cout << dp[1];
    return 0;
}
