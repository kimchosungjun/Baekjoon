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

using tpi = tuple<int, int, int>;

int T, N, M;
int m[11]{};
bool dp[555][5555]{}; // dp[i][j]: 총 i점일때 j번 팔굽혀펴기가 가능한가 ?

int solve() {
    memset(dp, 0, sizeof(dp));
    queue<tpi> q;
    for (int i = 0; i < M; i++) {
        int now = m[i];
        q.push({ now, now, now });
        dp[now][now] = true;
    }

    while (!q.empty()) {
        // csc: 득점한 총 점수
        // cas: 마지막으로 더한 팔굽혀펴기 수
        // cps: 총 팔굽혀펴기 수
        int csc, cas, cps;
        tie(csc, cas, cps) = q.front();
        q.pop();

        for (int i = 0; i < M; i++) {
            int nsc = csc + m[i];
            int nas = cas + m[i];
            int nps = cps + nas;
            if (nps > N || dp[nsc][nps]) continue;
            q.push({ nsc, nas, nps });
            dp[nsc][nps] = true;
        }
    }

    for (int i = 554; i >= 1; i--) {
        if (dp[i][N]) return i;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> N >> M;
        for (int i = 0; i < M; i++) cin >> m[i];
        cout << solve() << '\n';
    }
}