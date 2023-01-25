#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include <queue>
#include<cstring>
#include <cstdio>
#include<cmath>
using namespace std;

int arr[2010];
bool dp[2010][2010];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    int s, e;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i][i] = true;
    }
    for (int i = 1; i <= n - 1; i++) {
        if (arr[i] == arr[i + 1])
            dp[i][i + 1] = true;
    }
    for (int i = n - 2; i >= 1; i--) {
        for (int j = i + 2; j <= n; j++) {
            if (arr[i] == arr[j] && dp[i + 1][j - 1])
                dp[i][j] = true;
        }
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> s >> e;
        cout << dp[s][e] << '\n';
    }
    return 0;
}