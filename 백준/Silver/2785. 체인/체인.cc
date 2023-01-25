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

int n, l, ans = 0;
priority_queue <int, vector<int>, greater<int>> q;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l;
        q.push(l);
    }

    int f, s = q.size() - 1;

    while (s > ans) {
        f = q.top() - 1;
        q.pop();
        ans++;

        if (f != 0) q.push(f);

        s = q.size() - 1;
    }

    cout << ans;

    return 0;
}